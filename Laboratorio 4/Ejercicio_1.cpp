/*

 si (condicion) {

     bloque de codigo

 }más{

     bloque de codigo

 }

*/

// programa que indica que numero de los dos introducidos por el usuario es mayor

# include  <iostream>

using namespace std;

int  main () 
{
    int num1, num2;
    cout << " Ingrese el numero 1: " ;
    cin >> num1;
    cout << " Ingrese el numero 2: " ;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2;
    } else  if (num1 < num2) {
        cout << num2 << " es mayor que " << num1;
    } else {
        cout << " El numero: " << num1 << " y el numero " << num2 << " son iguales " ;
    }


    return 0 ;
}