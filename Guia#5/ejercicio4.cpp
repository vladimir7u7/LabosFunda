#include <iostream>
using namespace std;

bool bisiesto(int a){
    return((a % 4) == 0 && (a % 100) != 0) || ((a % 400) == 0);
}

int dias_mes(int mes, int a){
    int dias = 31;
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    } else if (mes == 2){
        if (bisiesto (a)){
            dias = 29;
        } else {
            dias = 28;
        }
    }
    return dias;
}

int main(){
    int dia, mes, a;
    char barra;
    cin>>dia>>barra>>mes>>barra>>a;
    dia++;
    if (dia > dias_mes(mes, a)){
        dia = 1;
        mes++;
        if (mes > 12){
            mes = 1;
            a++;
        }
    }
    cout<<dia<<"/"<<mes<<"/"<<a<<endl;
}