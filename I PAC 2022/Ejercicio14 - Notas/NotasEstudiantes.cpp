#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
    double subtotal = 0,total = 0,imp = 0.15, CDescuento,Cimpuesto = 0;
    int descuento = 0;

    cout << "Ingrese el subtotal de la facturacion porfavor: "<<endl;
    cin >> subtotal;
    cout << "Ingrese el descuento ( %0 | %10 | %15 | %20): "<<endl;
    cin >> descuento;

    CDescuento = (subtotal * descuento) / 100;
	Cimpuesto = (subtotal - CDescuento) * imp;
    total = subtotal - CDescuento + Cimpuesto;

    system("cls");
    cout << "El total a pagar es:L." << total<<endl;
	return 0;
}

