#include <iostream>
int array(int n);
using namespace std;
int main()
{
    int ar;

    cout << "\nSUMA DE DOS ARREGLOS\n\n";
    
    array(ar);

    return 0;
}

int array(int n)
{ 
      int arreglo1[100], arreglo2[100], arreglo3[100];

      cout << "Ingrese el tama""\xA4""o de los arreglos: " ;
      cin >> n;
      cout <<endl;

      for (int i = 0; i < n; i++){
             cout << "Ingrese el valor del primer arreglo: "; 
             cin >> arreglo1[i]; }

         cout <<endl;

      for (int i = 0; i < n; i++){
             cout << "Ingrese el valor del segundo arreglo: ";
             cin >> arreglo2[i];}  

      for (int i = 0; i < n; i++){  
             arreglo3[i] = arreglo1[i] + arreglo2[i]; }

      for (int i = 0; i < n; i++){
              cout << "\nLa suma de "<< arreglo1[i] <<" y " << arreglo2[i] <<" es: " <<arreglo3[i]; }

      cout <<endl <<endl;
}