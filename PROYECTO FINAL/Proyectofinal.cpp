#include "iostream"

const int longCad = 20;

struct costoPorArticulo {
    char nombreArticulo[longCad + 1]; 
    int cantidad;
    float precio;
    float costoPorArticulo;
};
using namespace std;

costoPorArticulo leerArreglo(int, costoPorArticulo arreglo []);
costoPorArticulo calPrecio(int, costoPorArticulo arreglo []);
void recArreglo(int, costoPorArticulo arreglo []);
float totalCancelar(int, costoPorArticulo arreglo []);

//Funcion que solicita la cantidad de articulos
int main()
{   
    int n;
    float precioFinal;
    cout << "FACTURA DE COMPRA." << endl <<endl;
    cout << "Digite la cantidad de articulos : " << endl;
    cin >> n; 
    cin.ignore(100, '\n');

    //Evalua que la cantidad de articulos sea valida 
    if (n <= 20 && n > 0) {
        costoPorArticulo arreglo [n];
        leerArreglo(n, arreglo);
        calPrecio(n, arreglo);
        recArreglo(n, arreglo);
        precioFinal = totalCancelar(n, arreglo);
        cout << endl  <<endl;
        cout << "El total a cancelar es: $" << precioFinal;
    } else {
        cout << "La cantidad maxima a evaluar debe ser de 20 productos." << endl;
    }

    return 0;
}

//Funcion que almacena en arreglo datos del articulo
costoPorArticulo leerArreglo(int n, costoPorArticulo arreglo []) {
    int cantidad;
    float precio;
    for(int i = 0; i < n; i++) {
        int n = i + 1;
        cout << "Ingrese la siguiente informacion del articulo: " << n << endl <<endl;
        cout << "Nombre del articulo: " << endl;
        cin.getline(arreglo [i].nombreArticulo, 20, '\n');
        cout << "Cantidad del articulo: " << endl;
        cin >> cantidad;
        cout << "Precio del articulo: " << endl;
        cin >> precio;
        cin.ignore(100, '\n');
        cout << endl;

        //Comprobar que la cantidad o precio sea valido
        if (cantidad > 0 && precio > 0) {
            arreglo [i].cantidad = cantidad;
            arreglo [i].precio = precio;
        } else {
            i--;
            cout << "Precio o cantidad no validos." << endl;
        }
    }

    return arreglo [0];
}

//Funcion que calcula costo por articulo
costoPorArticulo calPrecio(int n, costoPorArticulo arreglo []) {
    float costoFinal = 0;
    for(int i = 0; i < n; i++) {

        //Calcular precio total por articulo
        costoFinal = arreglo [i].precio * arreglo [i].cantidad;
        arreglo [i].costoPorArticulo = costoFinal;
    }

    return arreglo [0];
}

//Funcion que despliega el contenido del arreglo
void recArreglo(int x, costoPorArticulo arreglo []) {
    cout << "FACTURA DE COMPRA " << endl <<endl;
    for(int i = 0; i < x; i++) {
        int n = i + 1;
        cout << "Producto " << n <<  ": ";
        cout << arreglo [i].nombreArticulo;
        cout <<  " ** Cantidad: ";
        cout << arreglo [i].cantidad;
        cout <<  " ** Precio Unitario: $" ;
        cout << arreglo [i].precio;
        cout << " ** Precio total: $";
        cout << arreglo [i].costoPorArticulo;
        cout << endl;
    }
}
//Costo Total
float totalCancelar(int x, costoPorArticulo arreglo []) {
    float precioFin = 0;
    for(int i = 0; i < x; i++) {
        precioFin += arreglo [i].costoPorArticulo;
    }
    
    return precioFin;
}