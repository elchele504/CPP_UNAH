#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n1 = 0, n2 = 0;
  
  
  cout << "Bienvenido a la calculadora de Raiz: " << endl;

  cout << "Ingresa el numero: " << endl;
  cin >> n1;   

  cout << "Ingresa raiz(2,3,4,5): " << endl;
  cin >> n2;   

  cout << "La raiz de " << n1 << " es: " << pow(n1, n2);

  return 0;
}
