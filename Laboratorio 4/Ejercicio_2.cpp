# include  <iostream>

using namespace std;

int  main ()
 {
    float n1, n2, n3, promedio;
    cout << " Ingrese el primer numero: " ;
    cin >> n1;
    cout << " Ingrese el segundo numero: " ;
    cin >> n2;
    cout << " Ingrese el tercer numero: " ;
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3.0 ;

    if (promedio >= 6.0 ) {
        cout << " Materia aprobada con: " << promedio;
    } else {
        cout << " Materia reprobada con: " << promedio;
    }
    

    return  0 ;
}