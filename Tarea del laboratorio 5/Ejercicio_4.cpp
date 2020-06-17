#include <iostream>
using namespace std;
int DiasDelMes(int m);
bool bisiesto(int a)
{
    return ((a % 4) == 0 && (a % 100) != 0) || (a % 400 == 0);
}   

int DiasDelMes(int m, int a){
    int d = 31;
    if (m == 4 || m == 6 || m == 9 || m == 11){    //Abril, Junio, Septiembre y Noviembre.
        d = 30;
    }else if (m == 2){     //Febrero.               
        if (bisiesto(a)){
            d = 29;
        }else
            d = 28;
        } 
    return d;
}

int main()
{
    int dd, mm, aa;
    cout << "\nFECHA DEL D\xD6""A SIGUIENTE\n\n";
    cout << "Ingrese una fecha\n";
    cout << "D""\xA1""a: ";
    cin >> dd;
    cout << "Mes: ";
    cin >> mm;
    cout << "A""\xA4""o: ";
    cin >> aa;  

    dd++;
    if (dd > DiasDelMes(mm, aa)){
        dd = 1;
        mm++;
        if (mm > 12){
            mm = 1;
            aa++;   
        }  
    }
   
    cout << "La fecha es: "<<dd << "/" <<mm << "/" <<aa;
    cout <<endl <<endl;
    return 0; 
}


