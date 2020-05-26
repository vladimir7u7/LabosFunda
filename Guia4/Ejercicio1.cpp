#include "iostream"
using namespace std;
int main(void){
    int n1, n2;
    cout << endl;
cout << "VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO" << endl << endl;
cout << "Digite un numero entero: " << endl <<endl;
cin >> n1;
cout << "Digite un numero entero por el cual se desea dividir: " << endl <<endl;
cin >> n2;
if (n1 % n2 == 0)
{
    cout << n1 << " Es divisible entre " << n2 << endl;

}else
{
    cout << n1 << " No es divisible de forma entera con " << n2 << endl;
}
return 0;

}
