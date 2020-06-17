#include <iostream>
using namespace std;

bool bisiesto(int b)
{
     if (b % 4 != 0)
     {
         return false;
     }else if (b % 100 != 0)
     {
         return true;
     }else if (b % 400 != 0) 
     {
         return false;
     }else
     {
         return true;
     }
}   

int main()
{
    int bis;
    cout << "\nA""\xA5""O BISIESTO\n\n";
    cout << "Ingrese el a""\xA4""o: ";
    cin >> bis;

   if(bisiesto(bis)){
    cout << "El a""\xA4""o " << bis << " es bisiesto.\n\n";
   }else{
    cout << "El a""\xA4""o " << bis << " no es bisiesto.\n\n";
   } 
}