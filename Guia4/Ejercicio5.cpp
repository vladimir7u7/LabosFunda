#include "iostream"
using namespace std;
int main ()
{
    int l;
    string pal, a, b, c;
    cout << endl;
    cout << "VERIFICAR SI UNA PALABRA INICIA Y FINALIZA CON LA MISMA LETRA" <<endl <<endl;
    cout << "Ingrese una palabra" << endl;
    cin >>pal;
    cout << endl;
    a = pal[0];
    l = pal.length()-1;
    b = pal[l];
    c = (a==b)?" empieza y termina con la misma letra " : "no empieza y termina con la misma letra ";
    cout << "La palabra ingresada " << c << endl;
    return 0;

}