#include <iostream>
#include <string>

using namespace std;

int sumar_digitos_1(int n1, int n2){
    int suma = 0;
    /*
    123
    123 % 10 = 3    -> suma = 0 + 3
    123 / 10 = 12
    12 % 10 = 2     -> suma = 3 + 2
    12 / 10 = 1
    1 % 10 = 1      -> suma = 5 + 1
    1 / 10 = 0  <- se detiene el proceso
    */
    while( n1 > 0 ) {
        suma = suma + (n1 % 10);
        n1 = n1 / 10;
    }
    while( n2 > 0 ) {
        suma = suma + (n2 % 10);
        n2 = n2 / 10;
    }
    return suma;
}

int sumar_digitos_2(int n1, int n2){
    int suma = 0;
    string digitos = to_string(n1) + to_string(n2);
    /*
    n1 = 123 -> "123"
    n2 = 45  -> "45"
    digitos = "12345"
    */
    for( int i=0; i<digitos.length(); i++ ){
        suma = suma + (digitos[i] - '0');
        //             '9' (57)      48
        //                        9
    }
    return suma;
}

int main() {
    int n1, n2;

    cout << "Ingrese n1 y n2: ";
    cin >> n1 >> n2;

    cout << "(v1) La suma de los digitos es " << sumar_digitos_1(n1, n2) << endl;
    cout << "(v2) La suma de los digitos es " << sumar_digitos_2(n1, n2) << endl;

    return 0;
}