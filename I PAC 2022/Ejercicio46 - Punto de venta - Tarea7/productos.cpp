#include <iostream>
#include "productos.h"
#include "factura.h"
using namespace std;


void productos(int opcion)
{
    system ("cls");

    int opcion_producto = 0;

    switch (opcion)
    {
    case 1: 
        {
            cout << "Bebidas calientes" << endl;
            cout << "---------------" << endl;
            cout << "1 -> Chapuccino" << endl;
            cout << "2 -> CHAI" << endl;
            cout << endl;

            cout << "Ingrese una opcion Porfavor: ";
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Capuccino - L 44.00", 1, 44);
                break;   
            case 2:
                agregar_producto("1 CHAI - L. 50.00", 1, 50);
                break;  
            default:
                {
                    cout << "Opcion Incorrecta";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado con Exito" << endl << endl;
            system("pause");

            break;
        }
    
    case 2:
        {
            cout << "Bebidas Heleda" << endl;
            cout << "---------------- "<< endl;
            cout << "1 -> Granitas de Sabor Frutal" << endl;
            cout << "2 -> Mochaccino" << endl;
            cout << "3 -> Cafe Helado" << endl;
            cout << endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Granitas de Sabor Frutal - L 35.00", 1, 35);
                break;   
            case 2:
                agregar_producto("1 Mochaccino - L. 56.00", 1, 56);
                break; 
            case 3:
                agregar_producto("1 Cafe Helado - L. 30.00", 1, 30);
                break;
            default:
                {
                    cout << "Opcion Incorrecto";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado con Exito" << endl << endl;
            system("pause");

            break;
        }
    
    case 3: 
        {
            cout << "Reposteria" << endl;
            cout << "--------------" << endl;
            cout << "1 -> Croissant" << endl;
            cout << "2 -> Empanadas" << endl;
            cout << "3 -> Pie de Limon" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcion_producto;

            switch (opcion_producto)
            {
            case 1:
                agregar_producto("1 Croissant - L 40.00", 1, 40);
                break;   
            case 2:
                agregar_producto("1 Empanadas - L. 20.00", 1, 20);
                break; 
            case 3:
                agregar_producto("1 Pie de Limon - L. 30.00", 1, 30);
                break;
            default:
                {
                    cout << "Opcion Incorrecta";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado con exito" << endl << endl;
            system("pause");

            break;
        }
    
    default:
        break;
    }
}