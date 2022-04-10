#include <iostream>

using namespace std;

double subtotal, total;
string listaProductos;

void agregarProducto(string descripcion,int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    total = (subtotal * 0.15 + subtotal);
}

void imprimirFactura()
{
    system("cls");
    cout << "********" << endl;
    cout << "FACTURA" << endl;
    cout << "********" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;

    cout << endl;
    cout << "Impuesto: " << "15%";
    cout << endl;

    cout << endl;
    cout << "Total: " << total;
    cout << endl;

    system("pause");
}