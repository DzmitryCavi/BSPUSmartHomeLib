/* 
функции управления умным домом
*/
#ifndef BSPUSmartHomeLib_h
#define BSPUSmartHomeLib_h
#include "Arduino.h"
#endif



void WindowOpen(int WindowLength, int WindowSpeed);
void WindowClose(int WindowLength, int WindowSpeed);
void CoolerON(int CoolerPin);
void CoolerOFF(int CoolerPin);
void LightON(int LihgtPin);
void LightOFF(int LihgtPin);


