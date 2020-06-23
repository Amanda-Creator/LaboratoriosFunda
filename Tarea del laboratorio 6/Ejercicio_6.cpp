#include <iostream>
using namespace std;
 int main(){
    int n;
    int arreglo[100], veces, repite;
    veces = 0;

    cout << "\nCANTIDAD DE VECES QUE SE REPITE UN N""\xE9""MERO EN UN ARREGLO\n\n";

    cout << "Ingrese el tama""\xA4""o de los arreglos: " ; cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        cout << "Ingrese los valores del arreglo: "; 
        cin >> arreglo[i]; }

    cout << endl;

    cout << "Digite el n""\xA3""mero que desea saber cuantas veces se repite: ";
    cin >> repite;

    for (int i = 0; i < n; i++){
        if (repite == arreglo[i]){
            veces ++; }   
    }
    
    if (veces == 1)
    {
        cout << "El elemento " <<repite <<" se repite " <<veces <<" vez.\n\n";
    }else
    {
        cout << "El elemento " <<repite <<" se repite " <<veces <<" veces.\n\n";
    }

    return 0;
}