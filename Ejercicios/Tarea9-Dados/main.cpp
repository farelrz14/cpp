#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{  
    int miNumero1 = 0;
    int miNumero2 = 0;
    int resultado1 = 0;
    int resultado2 = 0;

    cout <<"****************************" << endl;
    cout <<"Bienvenido al Juego de Dados" << endl;
    cout <<"****************************" << endl;
    cout << endl;
    cout << endl;
    cout <<"Por favor elige el primer numero" << endl;
    cin >> miNumero1;
    cout << endl;
    cout <<"Por favor elige el segundo numero" << endl;
    cin >> miNumero2;
    cout << endl;

    srand(time(NULL));
    resultado1 = rand() % 6 + 1;
    resultado2 = rand() % 6 + 1;

    if (miNumero1 == resultado1 && miNumero2 == resultado2)
    {
        cout << resultado1 << endl;
        cout << resultado2 << endl;
        cout <<"Felicidades Ganaste";
        

    }if (miNumero1 <= resultado1 && miNumero2 <= resultado2 || miNumero1 >! resultado1 && miNumero2 >! resultado2)
    {
        cout << resultado1 << endl;
        cout << resultado2 << endl;
        cout <<"Lo Siento Vuelve a Intentar";
    }
    
    
    
    return 0;
}
