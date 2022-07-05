
#include <iostream>

using namespace std;

//Prototipos de funciones

int encotrar_mayor(int a, int b);

int main()
{
    int num1, num2;
    cout << "Ingrese dos valores: ";
    cin >> num1 >> num2;

    cout<<"El mayor de los dos n"<<char(163)<<"meros es: "<< encotrar_mayor(num1,num2);
    getchar();
    return 0;
    
}

int encotrar_mayor(int a, int b) {
    int mayor;
    if (a > b) {
        mayor = a;

    }
    else {
        mayor = b;
    }
    return mayor;
}
