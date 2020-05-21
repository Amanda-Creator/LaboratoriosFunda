#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << endl;

    cout << "Formula general para ecuaciones de segundo grado";

    float a, b, c, x1, x2;

    cout << endl <<endl;

    cout<< "ingrese a: ";

    cin>>a;

    cout << endl;

    cout<< "ingrese b: ";

    cin>>b;

    cout << endl;

    cout<< "ingrese c: ";

    cin>>c;

    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/(2 * a);
    x2=  (-b - sqrt(pow(b, 2) - 4 * a * c))/(2 * a);

    cout << endl;
    
    cout << "x1 = " << x1;

    cout << endl;

    cout << "x2 = " << x2;

    cout <<endl  << endl;
  
    return 0;
}




