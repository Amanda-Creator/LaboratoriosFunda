#include <iostream>
using namespace std;
float promedio(float prom);
int main()
{
    int prom;
    cout << "\nPROMEDIO DE ESTATURA DE 25 ALUMNOS\n\n";

    promedio(prom);

    return 0;
}

float promedio(float prom)
{
    int n = 25;
    float estatura[n], suma, max = 0, min = 0, igual = 0;

    for (int i = 0; i < n; i++)
     {
        cout << "Ingrese la estatura del alumno: "; cin >> estatura[i];
        suma += estatura[i];
     }
   prom = suma / n;
   for (int i = 0; i < n; i++)
   {
       if (estatura[i] > prom) { max++; }
       else if(estatura[i] < prom) { min++; }
   }
   cout << "\nLa media es: " <<prom <<"\n\n"; 
   cout << "Los datos menores que la media son: " <<min <<"\n";
   cout << "Los datos mayores que la media son: " <<max <<"\n\n";
  
   return 0;
}