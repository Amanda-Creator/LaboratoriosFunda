#include <iostream>

using namespace std;

int main()
{
    cout << endl;

    int Num1, Num2, Num3, Prom;

    cout << "Calculo de promedio" <<endl <<endl;

    cout << "Ingrese el primer numero: ";

    cin >> Num1;

    cout <<endl;

    cout << "Ingrese el segundo numero: ";

    cin >> Num2;

    cout <<endl;

    cout << "Ingrese el tercer numero: ";

    cin >> Num3;

    cout <<endl;

    Prom = (Num1+Num2+Num3)/3;

    cout << "El promedio es: " << Prom <<endl <<endl;

    return 0;
    
}
