#include <iostream>
using namespace std;

int main()
{
    cout <<endl << "NUMERO PAR O IMPAR" <<endl <<endl;
    int n, resultado;

    cout << "Digite el numero: ";
    cin >> n;

    if ( n % 2  == 0 )
    {
        cout << endl;
        cout << "El numero " <<n <<" es par." <<endl <<endl; 
    }else
    {
        cout << endl;
        cout << "El numero " <<n <<" es impar." <<endl <<endl; 
    } 
    

    return 0;
}