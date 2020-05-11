/*Realizar un programa en C++ que reciba 1 producto comprado 
(nombre, precio y cantidad comprada) y mostrar el total de dinero recibido*/

#include <iostream>

using namespace std;

int main ()
{

    double precio, cantidad;
    double total;
    char producto [100];
    
    cout <<"Hola, por favor intruzca el nommbre de su producto" <<endl;
    cin >>producto;
    cout <<"Ahora introduzca el precio del producto" <<endl;
    cin >>precio;
    cout << "Introduzca la cantidad comprada" <<endl;
    cin >>cantidad;
    
    
    total=precio*cantidad;
    
    cout <<"El nombre de su producto es: "<< producto <<endl;
    cout <<"El total es: "<< total <<endl;

    return 0;
}