/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 0;

    for (int i = 1; i <= 100; i++)
    {
        int cuadrado = i * i;
        num += cuadrado;
    }

    cout << "La suma de los numeros cuadrados entre 1 y 100 es: " << num << endl;

    return 0;
}