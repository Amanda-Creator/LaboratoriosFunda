#include <iostream>
using namespace std;
int hora(int h, int m, int s);
int main()
{
    int hh, mm, ss, c;
    cout << "\nHORA, MINUTOS y SEGUNDOS DE UN D""\xD6""A\n\n";
     
    cout << "Ingrese la hora, con sus respctivos minutos y segundos. \n";
    cout << "Hora: ";
    cin >> hh;
    cout << "Minutos: ";
    cin >> mm;
    cout << "Segundos: ";
    cin >> ss;

    hora(hh, mm, ss);

    cout << endl << endl;
    return 0;
}

int hora(int h, int m, int s)
{
    if (h >= 0 && h <=23 && m >= 0 && m <=59 && s >= 0 && s <=59){
        s ++;
      if (s == 60){
          s = 0;
          m ++;
          if (m == 60){
             m = 0;
             h ++;
              if (h == 24){
                  h = 0;
                }
            }    
        }      
    }else{
        cout << "La hora es incorrecta";
        return 0;
    }
     
cout << "\nLa hora es: " <<h <<":" <<m <<":" <<s;
if (h >= 12){
   cout << " p.m.";
   }else{
   cout << " a.m.";
   }
}                