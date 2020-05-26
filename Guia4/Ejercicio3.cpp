#include "iostream"
using namespace std;
int main(void)
{
    int n;
    cout << endl;
    cout << "VERIFICAR SI UN NUMERO ES NEGATIVO, POSTIVO O CERO " << endl <<endl;
    cout << "Digite un numero entero ";
    cin >>n;
    if (n> 0)
    {
        cout << "El numero es positivo" <<endl;
    }
    else if (n < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
    
    
}