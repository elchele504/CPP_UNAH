#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a = 5, b = 2;
	
	while (a > b) {
		cout << "Ingrese el valor de a" << endl; 
		cin >> a;
	}
	cout << endl;
	cout << "Saliste del ciclo";
	
	
	return 0;
}