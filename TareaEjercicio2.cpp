/*Realiza un programa en C++ que reciba el radio de un circulo 
y calcular area y perimetro*/

#include <iostream>
#define pi 3.14159

using namespace std;

int main ()
{
    float radio, area, perimetro;
    
    cout << "Por favor ingrese el radio del circulo"<< endl;
    cin >>radio;

    area = pi *radio*radio; 
    cout <<"El area del circulo es: " << area  <<endl;
   
    perimetro = 2*pi*radio;

    cout <<"El perimetro del circulo es: "<< perimetro <<endl;
     
    
    return 0;

}