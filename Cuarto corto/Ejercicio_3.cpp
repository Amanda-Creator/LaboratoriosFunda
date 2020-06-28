#include <iostream>
using namespace std;
float promedio(int n);
int main()
{
    cout << "\nC""\xB5""LCULO DE NOTA FINAL\n\n";
    float prom;

    promedio(prom);
     
   return 0;
}

float promedio(int r)
{
     int n = 5;
    float c, prom;

   
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese su calificacion: ";
        cin >> c;
        prom += c * 0.2; 
    }
    cout << "\nEl promedio es: " <<prom;

    if (prom >= 6)
    {
        cout << "\nAprobo la materia.\n\n";
    }else
    {
         cout << "\nReprobo la materia.\n\n";
    }
    
    return 0;
}

