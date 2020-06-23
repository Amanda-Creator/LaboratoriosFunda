#include <iostream>
using namespace std;
//Declarar
int solicitar (int n)
{
    int contador = 0;
    for( int i = 0; i < n; i ++)
    {
        char vocal;
        cout << "Ingrese una vocal: ";
        cin >> vocal;

        switch (vocal)
        {
        case 'a':
             contador += 1;
            break;
        case 'e':
             contador += 1;
            break;
        case 'i':
             contador += 1;
            break;
        case 'o':
             contador += 1;
            break;
        case 'u':
             contador += 1;
            break;
        default:
            break;
        }
    }
    return contador;
}
int main()
{
    int n;
    cout << "Ingrese la cantidad de caracteres a ingresar: "; cin >> n;
    cout << solicitar (n);
    return 0;
}