// Code developed by Linda Pérez on July 2020
// 

#include <iostream>
#include "Header.h"
using namespace std;



int main()
{
    TIME h;     //Se usará un objeto de la clase Time al cual llamaremos h

    cout << "La hora en formato militar inicial es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato estándar inicial es\t";
    h.PrintTimeStd();

    h.SetTime(13, 27, 6);

    cout << "\n\nDespués del ajuste";
    cout << "\nLa hora en formato militar es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato estándar es\t";
    h.PrintTimeStd();

    h.SetTime(99, 99, 99);
    cout << "\n\nProbando valores inválidos";
    cout << "\nLa hora en formato militar es\t";
    h.PrintTimeMil();
    cout << "\nLa hora en formato estándar es\t";
    h.PrintTimeStd();
    cout << endl << endl;

    return 0;
}
