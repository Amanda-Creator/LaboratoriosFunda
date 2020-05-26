#include <iostream>
using namespace std;

int main()
{
    cout <<endl << "NUMERO DIVISIBLE ENTRE OTRO" <<endl <<endl;
    int n1, n2, resultado;

    cout << "Digite el primer numero: " ;
    cin >> n1;

    cout <<endl << "Digite el segundo numero: ";
    cin >> n2;

    if ( n1 % n2 == 0 )
    {
        cout << endl;
        cout << "El numero " <<n1 << " es divisible con el numero " <<n2 <<endl <<endl;
    }else
    {
        cout << endl;
        cout << "El numero " <<n1 << " no es divisible con el numero " <<n2 <<endl <<endl;
    }
    
    return 0;
}