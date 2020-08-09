#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double respuesta = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;
    respuesta = sqrt(numero);
    cout << "La raiz cuadra es: " << respuesta;

    
    return 0;
}
