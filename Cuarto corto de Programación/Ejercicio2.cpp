#include <iostream>
 
using namespace std;
 
const int sz = 25;
 
void ordenar( float v[] );
float Emayor( const float v[] );
float Emenor( const float v[] );
void imprimir( const float v[] );
 
int main()
{
   float array[sz];
   float suma = 0.0f;
 
    cout << "Ingrese las estaturas ";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> array[i];
        suma += array[i];
    }
 
    ordenar(array);
 
    cout << " Ordenado: ";
    imprimir(array);
 
    cout << "Estatura mayor: " << Emayor(array) << endl;
    cout << "Estatura menor: " << Emenor(array) << endl;
    cout << "Promedio de estaturas: " << suma / sz << endl;
 
    return 0;
}
 
void ordenar( float v[] )
{
    float valor;
    int j;
 
    for( int i = 1; i < sz; i++ ) {
        valor = v[i];
        j = i;
        while( j > 0 && valor < v[j-1] ) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = valor;
    }
}
 
float Emayor( const float v[] )
{
    float max;
 
    for( int i = 0; i < sz; i++ )
        if( i == 0 || v[i] > max )
            max = v[i];
 
    return max;
}
 
float Emenor( const float v[] )
{
    float min;
 
    for( int i = 0; i < sz; i++ )
        if( i == 0 || v[i] < min )
            min = v[i];
 
    return min;
}
 
void imprimir( const float v[] )
{
    for( int i = 0; i < sz; i++ )
        cout << v[i] << " ";
 
    cout << endl;
}