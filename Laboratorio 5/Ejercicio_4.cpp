#include <iostream>
using namespace std;

int solicitar()
{
    int n;
    int contador = 0;
    while (n!= 0)
    {
        char vocal;
        cout << "Ingrese una vocal: ";
        cin >> vocal;
        switch (vocal)
        {
        case 'a' :
                contador += 1;
            break;
        case 'e' :
                contador += 1;
            break;
        case 'i' :
                contador += 1;
            break;
        case 'o' :
                contador += 1;
            break;
        case 'u' :
                contador += 1;
            break;            
        default:
            break;
        }
        cout << "¿Quieres seguir? presiona cualquier tecla sino presiona 0";
        cin >> n;
    }
    
    return contador;
}
int main ()
{
    cout << solicitar ();
    return 0;
}