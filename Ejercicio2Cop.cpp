/*Desarrollar un programa que imprima los números
impares en orden descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Odd numbers in descending order between 1 and 100:" << endl;
    for (int i = 99; i >= 1; i -= 2)
    {
        cout << i << " ";
    }
    return 0;
}