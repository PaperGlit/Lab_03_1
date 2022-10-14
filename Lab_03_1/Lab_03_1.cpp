// Lab_03_1.cpp
// Лазар Владислав
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    double x;
    double y1;
    double y2;
    double A;
    double B;

    cout << "x="; cin >> x;

    A = (2 * abs(5 - x));

    if (x <= -1)
    {
        B = exp(abs(2 + x));
    };
    if (-1 < x && x < 1)
    {
        B = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
    };
    if (x >= 1)
    {
        B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
    };

    y1 = A - B;
    
    cout << "1) y=" << y1 << endl;

    if (x <= -1)
    {
        B = exp(abs(2 + x));
    }
    else
    {
        if (-1 < x && x < 1)
        {
            B = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
        }
        else
        {
            B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
        }
    };
    
    y2 = A - B;

    cout << "2) y=" << y2 << endl;

    if (fabs(y1 - y2) < 0.0000001)
    {
        cout << "Результати рівні" << endl;
    }
    else
    {
        cout << "Результати нерівні" << endl;
    };

    return 0;
}
