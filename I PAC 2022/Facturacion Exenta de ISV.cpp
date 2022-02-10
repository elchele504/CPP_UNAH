#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    char facturaExenta;
    double total = 0,subtotal = 0,calcdes = 0,calcIS = 0,impuesto = 0.15;
    int descuento = 0;
      
    cout << "------Cafe El CheleHN--------- "<<endl;
    cout << "Porfavor ingrese el subtotal de la factura: "<<endl;
     cin >> subtotal;
    
    cout << "Porfavor ingrese 0...%10....%15....%20: "<<endl;
     cin >> descuento;
    
    cout << " ! Factura exenta...? Escriba SI o No: "<<endl;
     cin >> facturaExenta;
        
     if (facturaExenta == 'Si' && facturaExenta == 'si')
    {
	    calcIS = 0;
    }	
        else
        {
        calcIS = (subtotal - calcdes) * 0.15;
    }

    cout<<"----------------" << endl; 
    calcdes = subtotal * descuento / 100;
    total = subtotal - calcdes + calcIS;
    cout << "El Valor Total es: L. " << total<< endl;
	return 0;
}
