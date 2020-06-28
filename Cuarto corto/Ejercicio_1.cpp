#include <iostream>
using namespace std;
char clave(char frase[100]);
int main()
{
    char frase[100];
    cout << "\nCLAVE DEL MURCI""\x90""LAGO\n\n";
    cout << "Ingrese la frase: ";
    cin.getline(frase, 100);
    cout << endl;
    
    clave(frase);

    return 0;
}

char clave(char frase[100])
{
    int x = 0;
    while (frase[x] != 0)
    {
        if (frase[x] == 'M' || frase[x] == 'm') { frase[x] = '0';}
        if (frase[x] == 'U' || frase[x] == 'u') { frase[x] = '1';}
        if (frase[x] == 'R' || frase[x] == 'r') { frase[x] = '2';}
        if (frase[x] == 'C' || frase[x] == 'c') { frase[x] = '3';}
        if (frase[x] == 'I' || frase[x] == 'i') { frase[x] = '4';}
        if (frase[x] == 'E' || frase[x] == 'e') { frase[x] = '5';}
        if (frase[x] == 'L' || frase[x] == 'l') { frase[x] = '6';}
        if (frase[x] == 'A' || frase[x] == 'a') { frase[x] = '7';}
        if (frase[x] == 'G' || frase[x] == 'g') { frase[x] = '8';}
        if (frase[x] == 'O' || frase[x] == 'o') { frase[x] = '9';}
     x++;   
    }
    cout << "La frase es: " << frase;
    cout << endl << endl;
    return 0;
}