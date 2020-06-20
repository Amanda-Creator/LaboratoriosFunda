#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese el termino del arreglo: "; cin >> n;

    int vector[n];

    //llenamos el array
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un datos: "; cin >> vector[i];
    }

    cout << "Array [";
    for (int i = 0; i < n; i++)
    {
        cout << vector[i]<< " ";
    }
    cout <<"]";
    
//para ver una posicion en especifico
    cout << "posicion 3: " <<vector[3];
    
    return 0;
}