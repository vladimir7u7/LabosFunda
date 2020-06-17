#include <iostream>
using namespace std;

bool bis (int a);

int main(){
   
cout<<"Ingrese un año: ";
int a;
cin>>a;

if(bis(a))cout<<"El año es Bisiesto";
else cout <<"El año no es Bisiesto";
 
}

bool bis(int a){
    if(a%4 != 0) return false;
    else if(a%100 != 0) return true;
    else if(a%400 != 0) return false;
    return true;
}