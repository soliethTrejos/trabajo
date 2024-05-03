/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>
using namespace std;

int main() {
    int numEstudiantes = 10;
    float nota, sumaNotas = 0, promedio;

    for (int i = 1; i <= numEstudiantes; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sumaNotas += nota;
    }

    promedio = sumaNotas / numEstudiantes;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
