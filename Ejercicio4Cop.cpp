/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main()
{
    float grades[10]; // array to store the grades of the 10 students
    float sum = 0.0;  // variable to store the sum of the grades

    // input the grades of the 10 students
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the grade of student " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i]; // add the grade to the sum
    }

    // calculate the overall average
    float average = sum / 10.0;

    // output the overall average
    cout << "The overall average of the section is: " << average << endl;

    return 0;
}