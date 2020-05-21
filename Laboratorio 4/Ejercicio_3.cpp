# include  <iostream>

using namespace std;

int  main () 
{
    int x;
    
    cout << "Ingrese el numero: " << endl;
    cin >> x;

    if (x% 2 == 0 ) {
        cout << " El numero: " << x << " es par " << endl;
    } else {
        cout << " El numero: " << x << " es impar " << endl;
    }

    

    return 0 ;
}