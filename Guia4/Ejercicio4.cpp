#include "iostream"
#include "stdlib.h"
#include "string.h"
using namespace std;
int main()
{
    int longitud;
    char palabra[0];
    cout << "Digite una palabra " <<endl;
    cin >> palabra;
    longitud = strlen(palabra);
    if (longitud < 10)
    {
        cout << "La palabra tiene menos de 10 caracteres" << endl;
      
        
    }
    else if (longitud > 10)
    {
        cout << "La palabra ingresada tiene mas de 10 caracteres" <<endl;
    }
    if (longitud % 2 == 0)
    {
        cout << "y es par" << endl;

    }else
    {
        cout <<"y no es par "<< endl;
    }
    
    
    
   return 0;
    
    

}
