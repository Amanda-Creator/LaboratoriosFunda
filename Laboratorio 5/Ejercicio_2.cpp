#include <iostream>
using namespace std;
int darVuelta (int algo);
int main()
{
    int numero;
    cout<< "Ingrese un numero: ";
    cin >> numero;

    cout << "El numero a revez es: "<< darVuelta (numero);

    return 0;
}

int darVuelta(int n)
{
    int aux = 0; //5432

    while (n>0)
    {
        aux = aux * 10 + n % 10;
        n = n/10;
    }
    return aux;
}