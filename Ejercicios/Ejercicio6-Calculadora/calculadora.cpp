#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double a = 0;
    double b = 0;
    double resultadosuma = 0;
    double resultadoresta = 0;
    double resultadomultiplicacion = 0;
    double resultadodivision = 0;


    cout <<"Ingrese el valor de a: ";
    cin >> a;

    cout << endl;

    cout <<"Ingrese el valor de b: ";
    cin >> b;

    cout << endl;

    resultadosuma = a + b;
    resultadoresta = a - b;
    resultadomultiplicacion = a * b;
    resultadodivision = a / b;

    cout << "La resta de a + b es: "  << resultadosuma << endl;
    cout << "La resta de a - b es: "  << resultadoresta << endl;
    cout << "La multiplicacion de a * b es: "  << resultadomultiplicacion << endl;
    cout << "La division de a / b es: "  << resultadodivision << endl;




    
    
    
    

    return 0;
}
