/*Hacer un programa que sume los números
pares comprendidos entre 100 y 200.*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0; // variable to store the sum of the even numbers

    // sum the even numbers between 100 and 200
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {             // check if the number is even
            sum += i; // add the even number to the sum
        }
    }

    // output the sum
    cout << "The sum of the even numbers between 100 and 200 is: " << sum << endl;

    return 0;
}