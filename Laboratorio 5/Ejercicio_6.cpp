#include <iostream>
using namespace std;

int buscar (int cantidad, int digito)
{//54323
    int contador = 0;
    int aux = cantidad;
    while (cantidad > 0)
    {
        cantidad %= 10;

        if (cantidad == digito)
        {
            contador += 1;
        }
        aux /= 10;
        cantidad = aux; //Se mantiene la referencia de la cantidad
    }
    
    return contador;
}
int main()
{
    int num, dig;
    cout << "Ingrese una cantidad: "; cin >> num;
    cout << "Ingrese un digito: "; cin >> dig;
    cout << "El numero "<< dig <<" se encuentra "<< buscar (num, dig) << " veces";
    
    return 0;
}