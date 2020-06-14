#include <iostream>
void bisiesto(int b); //Funcion
using namespace std;
int main()
{
    int bisies;
    cout << "\nA""\xA5""O BISIESTO\n\n";
    cout << "Ingrese el a""\xA4""o: ";
    cin >> bisies;

    bisiesto(bisies); //Se convoca la funcion

    return 0;
}

void bisiesto(int b){  //Definicion de la funcion
    if (b % 400 == 0)
    {
        cout << "\nEl a""\xA4""o " << b << " es bisiesto.\n\n";
        
    }else if (b % 100 != 0)
    {
        if (b % 4 == 0)
        {
        cout << "\nEl a""\xA4""o " << b << " es bisiesto.\n\n";
        }else
        {
        cout << "\nEl a""\xA4""o " << b << " no es bisiesto.\n\n";
        }
    }else
    {
        cout << "\nEl a""\xA4""o " << b << " no es bisiesto.\n\n";
    } 
}