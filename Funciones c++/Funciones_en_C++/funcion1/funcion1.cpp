//Diseñar una funcion que calcule la media de tres numeros leidos del teclado y poner un ejemplo de su aplicacion


#include <iostream>

using namespace std;

int numeros(int a, int b, int c) {

    int promedio;

    promedio = (a + b + c) / 3;

    return promedio;

}

int main()
{
    int a,b,c;
    cout << "Ingrese el primer digito: ";
    cin >> a;
    cout << "Ingrese el segundo digito: ";
    cin >> b;
    cout << "Ingrese el tercer digito: ";
    cin >> c;

    cout << "El promedio de los tres n" << char(163) << "meros es: " << numeros(a, b, c);

}

