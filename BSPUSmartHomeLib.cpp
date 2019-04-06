

// Исходный код библиотеки home


#include "Arduino.h"
#include "BSPUSmartHomeLib.h"

// переменные^
// шторы
int in1 = 2; 
int in2 = 3; 
int in3 = 4; 
int in4 = 5;
 


//Включить свет
void LightON( int LihgtPin){
digitalWrite(LihgtPin, LOW);
}

//Выключить свет
void LightOFF( int LihgtPin){
digitalWrite(LihgtPin, HIGH);
}

//Включить винт
void CoolerON( int CoolerPin){

digitalWrite(CoolerPin, LOW);

}
//Выключить винт винт
void CoolerOFF(int CoolerPin){

digitalWrite(CoolerPin, HIGH);

}

//Функция открывающая шторы
void WindowOpen( int WindowLength, int WindowSpeed) {
   for(int i=1; i < WindowLength; i++){ 
  digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, LOW ); 
  digitalWrite( in2, HIGH ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, HIGH ); 
  digitalWrite( in2, HIGH ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, HIGH ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, HIGH ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed); 
 
  digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed);} 
  
  }
 //Функция закрывающая шторы
void WindowClose(int WindowLength, int WindowSpeed) {
  for(int j=1; j < WindowLength ;j++){ 
    digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed); 
 
   digitalWrite( in1, HIGH ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed); 
 
    digitalWrite( in1, HIGH ); 
  digitalWrite( in2, HIGH ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
    digitalWrite( in1, HIGH ); 
  digitalWrite( in2, HIGH ); 
  digitalWrite( in3, LOW ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
   digitalWrite( in1, LOW ); 
  digitalWrite( in2, HIGH ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
    digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, LOW ); 
  delay(WindowSpeed); 
 
digitalWrite( in1, LOW ); 
  digitalWrite( in2, LOW ); 
  digitalWrite( in3, HIGH ); 
  digitalWrite( in4, HIGH ); 
  delay(WindowSpeed); 
  }
}
