#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<fstream>

using namespace std;
int hrEntrada,hrSalida,c,d,dinero,cambio,c1,c2,c5,c10,c20,c50,c100;
string placa;
int opcion;
int main()
{

//Arreglo de Guardado de Registro
fstream archivo("registro.txt",ios::out);

do{
			
	
	cout<<"Bienvenido al Parqueo del Mecardo de Guamilito:"<<endl;
	cout<<"Horario:"<<endl;
	cout<<"Lunes a Sabado"<<endl;
	cout<<"07 AM - 20 PM"<<endl;
	cout<<"===========================:"<<endl;
	
	
	cout<<"Ingrese Numero de la Placa:"<<endl;
	cin>>placa;
	
	cout<<"Hora de ingreso  24 H:"<<endl;
	cin>>hrEntrada;
	cout<<"Hora de salida 24 H:"<<endl;
	cin>>hrSalida;
	c=hrSalida-hrEntrada;
	cout<<"Horas de servicios:"<<c;
	cout<<"\n\n";
	d=18*c;
	cout<<"Importe a pagar :L."<<d<<endl;
	cout<<"Insertar  la cantidad del Billete: L. ";
	cin>>dinero;
	if(dinero<d)
	{
		cout<<"Ingrese un Billete Cantida mayor al Cobro Porfavor"<<endl;
		cin>>dinero;
	}
	else{
	cout<<"\n\n\n";
	cambio=dinero-d;
	}	
	system("cls");
	
	//Sistema de Cambio ovuelto
	
	cout<<"El Cambio es  : L."<<cambio<<endl;
	
	c100=cambio/100;
	cambio=cambio%100;
	c50=cambio/50;
	cambio=cambio%50;
	c20=cambio/20;
	cambio=cambio%20;
	c10=cambio/10;
	cambio=cambio%10;
	c5=cambio/5;
	cambio=cambio%5;
	c2=cambio/2;
	cambio=cambio%2;
	c1=cambio;

	cout<<"L.100  "<<c100<<endl;
	cout<<"L.50   "<<c50<<endl;
	cout<<"L.20   "<<c20<<endl;
    cout<<"L.10   "<<c10<<endl;
    cout<<"L.5    "<<c5<<endl;
	cout<<"L.2    "<<c2<<endl;
	cout<<"L.1    "<<c1<<endl;
	
	//Guarda los registro conforme a este orden
	 archivo<<"Numero de Placa:"<<placa<<endl<<"Hora de Entrada:"<<hrEntrada<<" "<<"Hora de Salidda:"<<hrSalida<<endl<<"Cobro : L."<<d<<endl;

	//Condicional
	cout<<"Desea Agregar Otro Vehiculo"<<endl;
	cout<<"Ingrese 1 para continuar y 0 para Salir"<<endl;
	cin>>opcion;	
	system("cls");
}
	while (opcion !=0);
	archivo.close();

	return 0;
}
