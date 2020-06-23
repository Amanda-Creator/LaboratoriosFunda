#include <iostream>
using namespace std;

int main()
{
    int unidades, decenas, centenas, millares, numero;

    cout << "Ingrese un numero: ";
    cin>>numero;
    unidades = numero/1;
    decenas = numero/10;
    centenas = numero/100;
    millares = numero/1000;
    cout<<"El numero: "<<numero<<"\n\nTiene "<<unidades <<" unidades,"<<decenas 
    <<" decenas, "<<centenas <<" centenas y "<<millares <<" millares.";
    return 0;
}