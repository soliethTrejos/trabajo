/*Dado un número natural n se desea calcular la suma de los números naturales 
desde 1 hasta n. Codifica el programa que resuelva este planteamiento.*/

#include <iostream>

using namespace std;

int calculateSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    cout << "The sum of natural numbers from 1 to " << n << " is: " << calculateSum(n) << endl;
    return 0;
}