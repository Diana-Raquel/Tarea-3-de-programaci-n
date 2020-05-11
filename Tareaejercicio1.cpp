/*Realiza un programa en C++ que devuelva el promedio de 3 numeros enteros ingresados por el usuario*/

#include <iostream>

using namespace std;

 int main ()
 {
     double n1, n2, n3, promedio;
     
     cout << "Por favor dijite un numero" << endl;  
     cin >> n1; 
     cout << "Por favor dijite un segundo numero" << endl;
     cin >> n2;
     cout << "Por favor dijite un tercer numero" << endl; 
     cin >> n3;

     promedio = (n1 + n2 + n3)/3;

     cout << "El promedio de los 3 numeros es: " << promedio <<endl;


     return 0;
 }