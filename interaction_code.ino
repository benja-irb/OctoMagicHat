#include <Servo.h>

//Asignar los pines a los objetos:
#define pin_boton 2 //pin botón.
#define pin_buzz 4  //pin buzzer.


#define pin_servo_Mec 3  //pin del actuador del "Mecanismo".
#define pin_servo_Oct 5  //pin del actuador del "Octopus".

//definir objetos para servos
Servo servoMec; 
Servo servoOct;

void setup()
{
  //attach de los pines a los objetos "servos".
  servoMec.attach(pin_servo_Mec);
  servoOct.attach(pin_servo_Oct);

  //Pin Modes...
  pinMode(pin_servo_Mec, OUTPUT);  //Mecanismo.
  pinMode(pin_servo_Oct, OUTPUT);  //Octopus.
  pinMode(pin_boton, INPUT);       //Botón.
  pinMode(pin_buzz, OUTPUT);       //Buzzer.


  //predefinir posición de los servos:
  servoMec.write(10);   //Posición dentro del sombrero.
  servoMec.write(60);   //Octopus en dirección hacia el frente.
}


void loop()
{
  //el programa espera hasta que se presione el pulsador:
  if (digitalRead(pin_boton)) {

    servoMec.write(90);   //activación del mecanismo.
    delay(500);
    buzz_hola();          //función definida más abajo.
    delay(500);
    headServo_hola();     //función definida más abajo.
    delay(500);
    buzz_adios();         //función definida más abajo.
    delay(500);


  }
  //condicional de reposo:
  else {
    servoMec.write(10);  //mecanismo vuelve a su posición de reposo.
    servoOct.write(60);  //El octopus vuelve a su posición de reposo.
  }
}

//Melodia de "saludo" en buzzer:
//Emite 3 sonidos de distintas frecuencias emulando un saludo...
void buzz_hola()
{
  tone(pin_buzz, 440, 100);  //tone(pin, frecuencia, t_on)
  delay(100);
  tone(pin_buzz, 340, 100);
  delay(100);
  tone(pin_buzz, 500, 100);
  delay(100);
}

//Melodia de "despedida" en buzzer:
//Emite 2 sonidos de distintas frecuencias emulando una despedida...
void buzz_adios() 
{
  tone(pin_buzz, 500, 100);
  delay(100);
  tone(pin_buzz, 440, 100);
  delay(100);
}

//Movimiento del pulpito de lado a lado:
//Nota: el servo apunta al frente a 60°.
void headServo_hola()
{
  servoOct.write(30);
  delay(200);
  servoOct.write(90);
  delay(500);
  servoOct.write(60);
}
  
 
