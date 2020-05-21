#include <iostream>
using namespace std;
//sumar numeros pares hasta un numero N
int main()
{
    int acum = 0;
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i = 0; i<=n; i++){
       if (i % 2 == 0){
           acum +=i; 
       }
    }
    cout<<"La suma de numeros pares es: "<<acum;
    

    return 0;
}