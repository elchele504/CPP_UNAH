#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
    int num1=0,num2=0; 

    cout<<"Bienvenido a la Calculador"<<endl<<endl;
    cout<<"Porfavor Ingrese el su Primer numero Porfavor"<<endl;
    cin>>num1;
    cout<<"Porfavor Ingrese el su Primer numero Porfavor"<<endl;
    cin>>num2;

    system ("cls");
    
    //Resultados

	cout<<"----------------------------------"<<endl;
    cout<<"Tu Primer Numero es:"<<num1<<endl;
    cout<<"Tu Segundo Numero es:"<<num2<<endl;
    cout<<"----------------------------------"<<endl;
    
    cout<<"En Suma es:"<<num1+num2<<endl;
    cout<<"En Resta es:"<<num1-num2<<endl;
    cout<<"En Multiplicacion es:"<<num1*num2<<endl;
    cout<<"En Division es:"<<num1/num2<<endl;
    
    
    
	return 0;
}