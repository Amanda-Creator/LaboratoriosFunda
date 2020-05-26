#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout <<endl <<"CONTEO DE CARACTERES DE UNA PALABRA CON LONGITUD PAR O IMPAR" <<endl <<endl;
    int longitud;
    char palabra[15];
    
    cout <<"Digite la palabra: " ;
    cin >> palabra;

    longitud = strlen(palabra);

    if ( longitud < 10 )
    {
        if ( longitud % 2 == 0)
        {
            cout << endl;
            cout << "La palabra " <<palabra << " contiene menos de 10 caracteres y es par."<<endl 
                 << "La palabra digitada contiene " <<longitud <<" caracteres." <<endl <<endl ;
        }else
        {
            cout << endl;
            cout << "La palabra " <<palabra << " contiene menos de 10 caracteres y es impar."<<endl 
                 << "La palabra digitada contiene " <<longitud <<" caracteres." <<endl <<endl ;
        }    
    }else if ( longitud > 10)
    {
         if ( longitud % 2 == 0)
        {
            cout << endl;
            cout << "La palabra " <<palabra << " contiene mas de 10 caracteres y es par." <<endl 
                 << "La palabra digitada contiene " <<longitud <<" caracteres." <<endl <<endl;
        }else
        {
            cout << endl;
            cout << "La palabra " <<palabra << " contiene mas de 10 caracteres y es impar." <<endl 
                 << "La palabra digitada contiene " <<longitud <<" caracteres." <<endl <<endl;
        }
        
    }else
    {
        cout << endl;
        cout << "La palabra " <<palabra << " contiene 10 caracteres y es par." <<endl <<endl;
    }
    
    return 0;
}