#include <iostream>
using namespace std;

int main()
{
    cout << endl << "NUMERO POSITIVO O NEGATIVO" <<endl <<endl;
    int n;
    float resultado;

    cout << "Digite el numero: ";
    cin >> n;

    if ( n < 0 )
    {
        cout << endl;
        cout << "El numero " << n << " es negativo." <<endl <<endl;

    }else if ( n > 0)
    {
        cout << endl;
        cout << "El numero " << n << " es positivo." <<endl <<endl;

    }else
    {
        cout << endl;
        cout << "El numero es cero." <<endl <<endl;
        
    }
    

    return 0;
}