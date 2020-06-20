#include <iostream>
#include <math.h>
using namespace std;
float promedio(int a[], int n);
float incerteza(float vector[], int n );
int main()
{
    int n;
    cout << "Ingrese el tamaño del array: "; cin >> n;
    float vector[n];

    //llenamos el array
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el dato: "; cin >> vector[i];
    }
    cout << "El valor de la incerteza es: " << incerteza(vector, n);
    
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

float incerteza(float vector[], int n)
{
    float suma = 0, resta, prom,  promedio, resultado;
    prom = promedio* (vector, n);
    for (int i = 0; i < n; i++)
    {
        resta = vector[i] - prom;
        suma += pow((resta), 2);
    }
    
resultado = suma / (n - 1);
resultado = sqrt(resultado);

return resultado;
}
