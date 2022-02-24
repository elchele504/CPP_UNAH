#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0, total = 0, imp = 0.15;

    cout << "Ingrese el subtotal de la factura porfavor: "<< endl;
    cin >> subtotal;

    total = subtotal + (subtotal * imp);

    cout << "El total a pagar es :L. " << total<< endl;

    return 0;
}
