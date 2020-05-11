/*Realizar un programa en C++ que reciba a,b y c y nos devuelva el resultado de la formula cuadratica*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{ 
    double a, b, c, x1, x2;

    cout <<"Introduzca el valor para a" << endl;
    cin >> a;
    cout <<"Introduzca el valor para b" <<endl;
    cin >> b;
    cout <<"Introduzca el valor para c" <<endl;
    cin >> c;

    x1 =(-b+sqrt(b*b-4*a*c))/(2*a);
    x2 =(-b-sqrt(b*b-4*a*c))/(2*a);

    cout << "El primer resultado es: " <<x1 <<endl;
    cout << "El primer resultado es: " <<x2 <<endl;

    return 0;

}