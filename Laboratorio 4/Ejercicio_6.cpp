#include <iostream>
using namespace std;

//programa que nos muestra los numeros desde el 1 hasta el n

int main()
{
    int n;
    cout<<"Ingrese el valor: ";
    cin>>n;

    for(int i=1; i <= n; i++){  // en la parte de la "i" puede ir cualquier variable
        cout<<i<<endl;
    }

    return 0;
}