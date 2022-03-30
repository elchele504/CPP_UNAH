#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1=0, i=0  , dado2=0, tiro;
    string jugar;
    
    while (true)
    {
        cout<<"Escriba cualquier letra para lanzar a la Suerte: "<< endl;
        cin >> jugar;

        system ("cls");
    
	    for (int i = 0; i <= 3; i++)
        {
    
	    srand (time (NULL));
        dado1 = rand()% 6+1;
        dado2 = rand()% 6+1;  
    
	    }
        
        cout << "Dado 1: "<< dado1 << endl;
        cout << "Dado 2: "<< dado2 <<endl;
         
		tiro = dado1 + dado2;       
    
	    cout<<"Los dado dieron : "<< tiro<<endl;
            
        if (tiro == 4 || tiro == 6 || tiro == 8)
        {
            cout<< endl << "      La Suerte esta de Tu Lado    "<< endl;
            break;
        }
        if (tiro == 2 || tiro == 12)
        {
            cout<< endl << "       Mas Salado que el mar Muerto     "<< endl;
            
            break;
        }
        
        system("pause");
        system ("cls");
    }

    return 0;
}
