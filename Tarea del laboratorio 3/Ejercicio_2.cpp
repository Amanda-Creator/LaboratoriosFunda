#include <iostream>

#include <math.h> 

using namespace std;

int main()
{
    cout << endl;

    cout << "Calculo de area y perimetro de un circulo" <<endl <<endl ;

    float radio, area, perim ;

    cout << "Ingrese el radio del circulo: ";

    cin >> radio;

    area = 3.1416 * pow(radio, 2);

    perim = 2 * 3.1416 * radio ;

    cout <<endl ;

    cout << "El area del circulo es: " << area <<endl <<endl ;

    cout << "El perimetro del circulo es: " << perim <<endl <<endl ;

    return 0;
}