// Code developed by Linda P�rez on July 2020
// 

#include <iostream>
#include "Header.h"
using namespace std;



int main()
{
    TIME h;     //Se usar� un objeto de la clase Time al cual llamaremos h

    cout << "La hora en formato militar inicial es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato est�ndar inicial es\t";
    h.PrintTimeStd();

    h.SetTime(13, 27, 6);

    cout << "\n\nDespu�s del ajuste";
    cout << "\nLa hora en formato militar es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato est�ndar es\t";
    h.PrintTimeStd();

    h.SetTime(99, 99, 99);
    cout << "\n\nProbando valores inv�lidos";
    cout << "\nLa hora en formato militar es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato est�ndar es\t";
    h.PrintTimeStd();
    cout << endl << endl;

    return 0;
}
