#include "iostream"
#include "conio.h"
using namespace std;
int mayor, menor, residuo;
int encontrarMCD(int x, int y);


int main(){
    int resp;
    cout << "MCD DE DOS NUMEROS\n\n";
cout << "Digite el numero mayor: ";
cin >> mayor;
cout << "Digite el numero menor: ";
cin >> menor;
resp = encontrarMCD(mayor, menor);
cout <<"El MCD es: "<<resp<<endl;


    return 0;
}


int encontrarMCD(int x, int y){
    do
{
residuo = mayor % menor;
if(residuo != 0){
mayor = menor;
menor = residuo;
}
}
while(residuo != 0);
return menor;


}