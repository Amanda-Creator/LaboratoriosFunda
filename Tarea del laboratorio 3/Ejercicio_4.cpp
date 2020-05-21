#include <iostream>

using namespace std;

int main()
{
    cout << endl;

    cout << "Dinero gastado en un producto" << endl <<endl;

    char producto[15];
    float precio, gasto;
    int cantidad;

    cout << "Ingrese el nombre del producto: ";

    cin >> producto;

    cout << endl <<endl;

    cout << "Ingrese el precio del producto: " <<"$";

    cin >> precio;

    cout << endl <<endl;

    cout << "Ingrsese la cantidad del producto: ";

    cin >> cantidad;

    cout << endl <<endl;

    gasto = cantidad * precio;

    cout << "Lo que gasto en su producto de " << producto << " fue: $" << gasto  << endl <<endl;

    return 0;

}