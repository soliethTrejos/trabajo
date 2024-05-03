/*Diseña un programa que solicite al usuario ingresar dos matrices y luego realice
la multiplicación de matrices. Asegúrate de que las dimensiones
de las matrices sean compatibles para la multiplicación y muestra
la matriz resultante.*/

#include <iostream>

using namespace std;

int main()
{
    int rows1, cols1, rows2, cols2; // dimensions of the matrices

    // input the dimensions of the first matrix
    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;

    // input the dimensions of the second matrix
    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    // check if the matrices can be multiplied
    if (cols1 != rows2)
    {
        cout << "Error: incompatible dimensions for matrix multiplication." << endl;
        return 1;
    }

    // input the elements of the first matrix
    int matrix1[rows1][cols1];
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // input the elements of the second matrix
    int matrix2[rows2][cols2];
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // multiply the matrices
    int result[rows1][cols2];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // output the result matrix
    cout << "The result of the matrix multiplication is:" << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}