#include <iostream>
using namespace std;
int MaxCoMul(int n1, int n2);
int main()
{
   int num1, num2, mcd;
   cout << "\nM.C.D. DE DOS N""\xE9""MEROS\n\n";

   cout << "Digite el n""\xA3""mero mayor: ";
   cin >> num1;
   cout << "Digite el n""\xA3""mero menor: ";
   cin >> num2; 

   MaxCoMul(num1, num2);
 
}

int MaxCoMul(int n1, int n2)
{
    int resi;
     do
     {
         resi = n1 % n2;
         if (resi != 0)
         {
             n1 = n2;
             n2 = resi;
         }    
     } while (resi != 0);
       cout << "\nEl m""\xA0""ximo com""\xA3""n divisor es: "<< n2;  
       cout << endl << endl;
     return 0;
}