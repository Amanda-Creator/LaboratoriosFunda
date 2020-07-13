#include <iostream>
using namespace std;
                                                                    
const int longCad = 20;

struct costoPorArticulo{
    char nombreArticulo[longCad +1];
    int cantidad;
    float precio;
    float suma;
    float importe;
    float subtotal; //sin IVA
    float costoPorArticulo; //total + IVA
};

void LeerProducto(int, struct costoPorArticulo[]);
void CalcularCostos(int, struct costoPorArticulo[]);
void mostrar(int, struct costoPorArticulo[]);

int main()
{
    int n;
    struct costoPorArticulo art[longCad];

    cout << "\nFACTURA\n\n";
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    cout << endl;

    LeerProducto(n, art);
    cout << endl;
    CalcularCostos(n, art);
    cout << endl;
    mostrar(n, art);
}

void LeerProducto(int n, struct costoPorArticulo X[])
{
    for (int i = 0; i < n; i++)         //Se le pide al usuario que ingrese el nombre del producto, el precio unitario y la cantidad a comprar.
    {   
        cout << "Producto: ";
        cin >> X[i].nombreArticulo;
        cout << "Precio unitario: $";
        cin >> X[i].precio;
        cout << "Cantidad de producto: ";
        cin >> X[i].cantidad;
        cout << endl;
    }
    system("cls");
}

void CalcularCostos(int n, struct costoPorArticulo X[])  
{
    float suma = 0, sinIVA = 0;      
    for (int i = 0; i < n; i++)
    {   X[i].importe = X[i].precio * X[i].cantidad; }  //Se calcula la cantidad que vale un producto (importe).

    for (int i = 0; i < n; i++)
    {  
         suma += X[i].importe; //Se calcula el total a pagar + IVA.
    } 
     for (int i = 0; i < n; i++)
    {  X[i].costoPorArticulo = suma;}

    for (int i = 0; i < n; i++)
    {   sinIVA = X[i].importe / 1.13 + sinIVA;  //Se calcula el subtotal sin tomar en cuenta el IVA
    }
     for (int i = 0; i < n; i++)
     { X[i].subtotal = sinIVA;}
}

void mostrar(int n, struct costoPorArticulo X[])  //Estructura de la factura.
{
    cout << "-------------------------------------------------------------------------------------------------------";
    cout << "\n                                 FACTURA DE PRODUCTOS COMPRADOS                                    \n";
    cout << "-------------------------------------------------------------------------------------------------------";
    cout << "\n\tCantidad\t\tProducto\t\t Precio unitario\t\tImporte\n\n";
    for (int i = 0; i < n; i++) 
    { cout << "\t" << X[i].cantidad <<"\t\t\t" << X[i].nombreArticulo <<"\t\t\t $" <<X[i].precio <<"\t\t\t\t$" <<X[i].importe << endl;}
    for (int i = 0; i < 1; i++)
    {
         cout <<"\n\n\n\t\t\t\t\t\t\t\t\tSubtotal: $" << X[i].subtotal <<"\n";
         cout <<"\t\t\t\t\t\t\t\t\tTotal: $" << X[i].costoPorArticulo <<"\n\n";
         cout << "-------------------------------------------------------------------------------------------------------\n\n";
    }
    system("pause");
}