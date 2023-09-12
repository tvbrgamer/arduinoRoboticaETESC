#include <Servo.h>

Servo Base, Garra, Horizontal, Vertical;

const int pinoBase = 7;
const int pinoGarra = 8;
const int pinoVertical = 9 ;
const int pinoHorizontal = 12;

// 7,8,9,12 - conjunto garra

// 5,6,10,11 - carrinho

void setup() {

  Base.attach(pinoBase); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO BASE
  
  Garra.attach(pinoGarra); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO GARRA
  
  Horizontal.attach(pinoHorizontal); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO HORIZONTAL
  
  Vertical.attach(pinoVertical); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO VERTICAL
}

void loop() {

//movimento da base

    Base.write(0);
    delay(2000);
    
    Base.write(30);
    delay(2000);

    Base.write(60);
    delay(2000);

    Base.write(90);
    delay(2000);

    Base.write(140);
    delay(2000);

    Base.write(90);
    delay(2000);

    Base.write(60);
    delay(2000);

    Base.write(30);
    delay(2000);
  
    Base.write(0);
    delay(2000);  

//movimento do braco

    Horizontal.write(0);
    delay(2000);

    Horizontal.write(30);
    delay(2000);

    Horizontal.write(60);
    delay(2000);

    Horizontal.write(90);
    delay(2000);

//movimento da mao

    Vertical.write(0);
    delay(2000);
    
    Vertical.write(30);
    delay(2000);

    Vertical.write(50);
    delay(2000);

//movimento da garra

    Garra.write(0);
    delay(2000);
    
    Garra.write(60);
    delay(2000);

    Garra.write(120);
    delay(2000);
  
    Garra.write(170);
    delay(2000);
}
