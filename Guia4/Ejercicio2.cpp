#include "iostream"
using namespace std;

int main (void){
    int n;
    cout << "VERIFICAR SI UN NUMERO ES PAR O IMPAR" << endl << endl;
    cout << "Digite un numero entero: " << endl <<endl;
cin >> n;
if (n % 2 == 0)
{
    cout << "El numero es par";
}
else
{
    cout << "El numero es impar";
}
return 0;


}