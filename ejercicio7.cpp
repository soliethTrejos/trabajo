/*Desarrolla un programa que solicite al usuario ingresar dos vectores 
de igual longitud y luego calcule la suma de ambos vectores. El 
resultado debe mostrarse en un tercer vector*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> suma(longitud);

    std::cout << "Ingrese los elementos del primer vector separados por espacios: ";
    for (int i = 0; i < longitud; i++) {
       cin >> vector1[i];
    }

    std::cout << "Ingrese los elementos del segundo vector separados por espacios: ";
    for (int i = 0; i < longitud; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

   cout << "La suma de los dos vectores es: ";
    for (int i = 0; i < longitud; i++) {
        cout << suma[i] << " ";
    }
    cout << std::endl;

    return 0;
}
