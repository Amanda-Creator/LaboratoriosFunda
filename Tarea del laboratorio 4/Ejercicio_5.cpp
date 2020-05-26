#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout <<endl <<"PALABRA QUE INICIA Y FINALIZA CON LA MISMA LETRA" <<endl <<endl;
    char palabra [15];
    int longitud;
    
    cout << "Digite una palabra: ";
    cin >> palabra;

    longitud = strlen(palabra);

    if (palabra[0] == palabra [longitud-1])
    {
        cout << endl;
        cout << "La palabra " <<palabra << " inicia y finaliza con la misma letra." <<endl <<endl;
    }else
    {
        cout<<endl;
        cout << "La palabra " <<palabra << " no inicia y no finaliza con la misma letra." <<endl <<endl;
    }
    return 0;
}