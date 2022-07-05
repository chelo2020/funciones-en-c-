
#include <iostream>
using namespace std;
int intercambio(int A, int B,int aux=0) {
   

    aux = A;
    A = B;
    B = aux;

    return (B);
}
int intercambio1(int A, int B, int aux = 0) {


    aux = B;
    B = A;
    A = aux;

    return (A);
}

int main()
{
    int A, B;

    cout << "Ingrese el primer n" << char(163) << "mero: ";
    cin >> A;
    cout << "Ingrese el segundo n" << char(163) << "mero: ";
    cin >> B;

    cout << "Los n" << char(163) << "meros ingresados son: " << A << "," << B<<"\n";

    cout << "Los n" << char(163) << "meros cambiados de lugar son: " << intercambio(A, B)<<" y "<<intercambio1(A, B);
}

