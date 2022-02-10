#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int nota = 0;
	cout << "---------------CEUTRUCHA-SPS------------- "<<endl; 
    cout << "Porfavor ingrese la nota del Estudiante a Evaluar: "<<endl;
    cin >> nota;


    if (nota >= 96 && nota <= 100)
    {
        cout << "La nota es una A++ "<<endl;
		cout << "Sobresaliente "<<endl;   
    }

    if (nota >= 91 && nota <= 95)
    {
        cout << "La nota es una A+ "<<endl; 
    }

    if (nota >= 86 && nota <= 90)
    {
        cout << "La nota es una A "<<endl; 
    }

    if (nota >= 81 && nota <= 85)
    {
        cout << "La nota es una A- "<<endl;
		cout << "Muy Buena XD "<<endl;   
    }

    if (nota >= 76 && nota <= 80)
    {
        cout << "La nota es una B+ "<<endl; 
    }

    if (nota >= 71 && nota <= 75)
    {
        cout << "La nota es una B "<<endl; 
        cout << "Buena"<<endl;  
    }

    if (nota >= 66 && nota <= 70)
    {
        cout << "La nota es B- "<<endl; 
    }

    if (nota >= 61 && nota <= 65)
    {
        cout << "La nota es C+ "<<endl;
		cout << "Con esto ni Derecho Puedes Estudiar XD "<<endl;   
    }

    if (nota >= 56 && nota <= 60)
    {
        cout << "La nota es C "<<endl; 
    }

    if (nota >= 51 && nota <= 55)
    {
        cout << "La nota es C- "<<endl; 
    }

    if (nota >= 46 && nota <= 50)
    {
        cout << "La nota es D+ "<<endl; 
    }

    if (nota >= 41 && nota <= 45)
    {
        cout << "La nota es D "<<endl;
		cout << "Mejor hacete Diputado "<<endl;   
    }

    if (nota >= 36 && nota <= 40)
    {
        cout << "La nota es una D- "<<endl; 
    }

    if (nota >= 31 && nota <= 35)
    {
        cout << "La nota es una E+ "<<endl; 
    }

    if (nota >= 26 && nota <= 30)
    {
        cout << "La nota es una E "<<endl; 
    }

    if (nota >= 21 && nota <= 25)
    {
        cout << "La nota es una E- "<<endl; 
    }

    if (nota >= 16 && nota <= 20)
    {
        cout << "La nota es una F+ "<<endl; 
    }

    if (nota >= 11 && nota <= 15)
    {
        cout << "La nota es una F "<<endl; 
    }

    if (nota >= 6 && nota <= 10)
    {
        cout << "La nota es una F- "<<endl; 
    }

    if (nota >= 0 && nota <= 5)
    {
        cout << "La nota es una F-- "<<endl;
        cout << "XD "<<endl;  
        
    }

    return 0;
}
