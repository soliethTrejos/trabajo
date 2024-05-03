/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/
#include <iostream>
using namespace std;

int main() {
    const int numEstudiantes = 8;
    int aprobados = 0, reprobados = 0;
    float nota, sumaNotas = 0, promedio;

    for (int i = 1; i <= numEstudiantes; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sumaNotas += nota;

        if (nota >= 60) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedio = sumaNotas / numEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
