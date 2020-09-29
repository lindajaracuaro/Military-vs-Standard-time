// Code developed by Linda Pérez on July 2020
// 

#include <iostream>
#include "Header.h"
using namespace std;



TIME::TIME() { TIME::hour = min = sec = 0; }      //Uso de constructor para inicializar datos miembro

void TIME::SetTime(int h, int m, int s)       //Si el valor no se encuentra dentro del rango, imprimir 0
{
    hour = (h >= 0 && h < 24) ? h : 0;
    min = (m >= 0 && m < 60) ? m : 0;
    sec = (s >= 0 && s < 60) ? s : 0;
}

void TIME::PrintTimeMil() // Si es menor a dos dígitos, imprimirá un 0 antes
{
    cout << (hour < 10 ? "0" : "") << hour << " : "
        << (min < 10 ? "0" : "") << min;
}

void TIME::PrintTimeStd()
{
    cout << ((hour == 0 || hour == 12) ? hour : hour % 12)
        << " : " << (min < 10 ? "0" : "") << min
        << " : " << (sec < 10 ? "0" : "") << sec
        << (hour < 12 ? " am " : " pm ");
}
