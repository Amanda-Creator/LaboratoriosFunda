#include <iostream>
#include <stdlib.h>
using namespace std;
void opcion(char);
int main()
{
    int num, intento = 0, m = 56;
    char s;
   do
   {
       cout << "\nEL N""\xE9""MERO M""\xB5""GICO\n\n";
       cout << "Adivine el n""\xA3""mero que se encuentra entre 0 y 100.\n" <<"Tiene 5 intentos\n";
       cout << "\nDigite el n""\xA3""mero: ";
       cin >> num;
   
    if (num < m){
       cout << "Ese no es el n""\xA3""mero, intentelo de nuevo.\n\nPista: el n""\xA3""mero es mayor al que usted digito.\n";
       intento++;
       cout << "Desea salir del juego? Escriba: si o no\n\nRespuesta: ";
       opcion(s);
   
    }else if (num > m){
       cout << "Ese no es el n""\xA3""mero, intentelo de nuevo.\n\nPista: el n""\xA3""mero es menor al que usted digito.\n"; 
       intento++;
       cout << "Desea salir del juego? Escriba: si o no \n\nRespuesta: ";
       opcion(s);
      
    }else{
       cout << "\n\nFelicidades, logro adivinar el n""\xA3""mero. \n";
       break;
          
       } 
    }
    // fin de los 5 intentos
   while (intento < 5);
       if(num !=m)
       {
         cout << "Ha sobrepasado los intentos permitidos";
       }else if(num == m || s == 'si')
       {
         cout << "El juego ha finalizado.\n\n";
       }
       
return 0;
}

//Elegir si se seguira el juego
void opcion(char)
{
   char op[2];
   cin >> op;
   int intento = 0;
   switch (op[2])
   {
   case 'si':
      cout << "El juego ha finalizado.\n\n";
      exit(0);
      break;
   case 'no':
      system ("pause");
      break;
   default:
   while (op == "no" );
   {
      if (intento == 1)
      {
         cout << intento--;
      }
   }
      break;
   }  
}