#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int par = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            par = par + i;
        }
        
        cout << i << "  ";
    }

    cout << endl;
    cout << endl;
    cout << "Total par: " << par;
    

    return 0;
}
