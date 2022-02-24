#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0,b = 0 ,resultado = 0;

    cout << "Ingrese el valor de a:  "<< endl;
    cin >> a;
    

    cout << "Ingrese el valor de b: "<< endl;
    cin >> b;

    resultado = a + b;

    
    system("cls");
    cout << "La suma de a + b es: "  << resultado<< endl;
    return 0;
}
