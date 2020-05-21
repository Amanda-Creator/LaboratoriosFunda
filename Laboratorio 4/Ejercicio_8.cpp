#include <iostream>
using namespace std;
int main()
{
    long long factorial=1;
    int n;

    do{
        cout<<"Ingrese un numero por favor: ";
        cin >> n;
    }while ( n<=0 );

    if(n <=20 ){
    for(int i=1; i<=n; i++){
         factorial*=i;
    }
    cout<<"El factorial de: "<<n<<" es "<<factorial;
    }else{
        cout<<"El numero ingresado es mayor a 20";
    }
    
    
    

    return 0;
}