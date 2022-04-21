#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo [5] [5];

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
          arreglo[i][j] = rand() % 50;
        }
    }
    
    int total = 0;

     cout<<"======================"<<endl;
    
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (arreglo[i][j] < 10)
            {
             cout<<"0"<<arreglo[i][j]<<" ";
            }else
            {
             cout<<""<<arreglo[i][j]<<" ";
            }           
             total = total + arreglo[i][j];
        }
        cout<<endl;
    }
        cout<<"======================"<<endl;
    
        cout << "Total de la Suma:" << total << endl;

    return 0;
} 