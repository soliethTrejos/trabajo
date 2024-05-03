/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>

using namespace std;

int main()
{
    int grades[8];    // array to store the grades of the 8 students
    int approved = 0; // variable to store the number of approved students
    int failed = 0;   // variable to store the number of failed students
    float sum = 0.0;  // variable to store the sum of the grades

    // input the grades of the 8 students
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter the grade of student " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i]; // add the grade to the sum

        // check if the student is approved or failed
        if (grades[i] >= 60)
        {
            approved++;
        }
        else
        {
            failed++;
        }
    }

    // calculate the overall average
    float average = sum / 8.0;

    // output the results
    cout << "Number of approved students: " << approved << endl;
    cout << "Number of failed students: " << failed << endl;
    cout << "Overall average: " << average << endl;

    return 0;
}