#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
    int par = 0,impar = 0,total = 0;
    for (int i = 1; i <= 10;i++)
    {
        if (i % 2 == 0)
        {
            par = par + i;
        }
        else
        {
        	impar += i;
        }
			total = par + impar;
        cout << i << "  ";
    }
	cout <<endl<<"Resultado" <<endl;
    cout << "----------------"<<endl;
    cout << "Total par: " << par << endl;
    cout << "Total impar: " << impar << endl;
    cout << "Suma es : " <<total<<endl;
    cout << "----------------"<<endl;

    return 0;
}

