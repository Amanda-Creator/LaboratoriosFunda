#include <iostream>
using namespace std;
//Tabla de multiplicar
int main()
{
    int n;
    cout<<"Ingrese la tabla a calcular: ";
    cin >> n;

    for(int i=1; i<=10; i++){
        cout << n << "*" << i << "="<< (n*i) <<endl;
    }   

    return 0;
}