#include <iostream>
using namespace std;
float promedio(int a[], int n);
int main()
{
    int n;
    cout << "Ingrese el tamaño del arreglo: "; cin >> n;
    int vector[n];

    //llenamos el array
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el dato: "; cin >> vector[i];
    }
    cout << "Su promedio de nota es: " <<promedio(vector, n);
    
    return 0;
}

float promedio(int array[], int n)
{
    float suma = 0, promedio;

    for (int i = 0; i < n; i++)
    {
        suma += array[i];
    }
    promedio = suma / n;
    return promedio;
}