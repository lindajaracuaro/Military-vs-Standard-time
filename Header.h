// Code developed by Linda Pérez on July 2020
// 

#pragma once
#include <iostream>

class TIME
{
public:
    TIME();
    void SetTime(int, int, int);
    void PrintTimeStd();
    void PrintTimeMil();

private:
    int hour, min, sec;
};
