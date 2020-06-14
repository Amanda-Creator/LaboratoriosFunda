#include <iostream>
#include <string.h>
void salario();
using namespace std;
int main()
{
    float h1, h2, st, sr, isss=0.04, AFP=0.0625, Renta=0.1;
    char empleado[80];
    cout << "\nCALCULO DE SALARIOS MENSUALES\n\n";

    cout << "Ingrese el nombre del empleado/a: ";
    gets(empleado);
    cout << "Ingrese las horas trabajadas: ";
    cin >> h1;
    cout << "Ingrese las horas extras: ";
    cin >> h2;

    h1*= 1.75; //$1.75 por hora.
    h2*= 2.50; //$2.50 por cada hora extra.
    st = h1+h2; //Salario total = horas trabajadas + horas extras.

    if (st >= 500){ //Condicional para los salarios mayores o iguales a $500.
       isss*= st;
       AFP*= st;
       Renta*= st;
       sr = st - (isss + AFP + Renta);
       cout << "\nEmpleado/a: " <<empleado <<endl << "Sueldo total: $"<<st <<endl << "Total a pagar: $" <<sr;

    }else{         //No se incluye el descuento de la renta porque el salario es menor a $500.   
       isss*= st;
       AFP*= st;
       sr = st - (isss + AFP);
       cout << "\nEmpleado/a: " <<empleado <<endl << "Sueldo total: $"<<st <<endl << "Total a pagar: $" <<sr <<endl;
    }
return 0;
}