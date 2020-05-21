#include <iostream>

using namespace std;

int main()
{
    int x;
    string respuesta;
    cout <<"Ingrese un numero por favor: ";
    cin>>x;
    //forma elegante
    respuesta = (x >= 0) ? "positivo" : "negativo";

    cout<< x <<" es "<< respuesta;


    /*
        forma informal
        if(x >=0){
        cout<<"positivo";
        }else{
        cout<<"negativo";
        }
    */

    return 0;
}