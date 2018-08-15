// Punto # 3 Construya una aplicación que determine si un número ingresado es par, impar o cero. 
//La aplicación debe indicarlo con una frase de acuerdo al caso.

#include <iostream>
#include <string>

int main()
{
    int a; // definir tipo de variable
    std::cout<<"ingrese un numero 'a' : "; // pedir numero
  std::cin>>a;
  (a==0)? std::cout<<" a es igual a 0" : a % 2 == 0  ? std::cout<<"a es un numero par" : std::cout<<"a es un numero impar";
  // primero se cumple la condición si a es igual a 0 entonces haga lo siguiente, sino se usa el operador módulo 
  // para saber si es par o impar 
  return 0;
}

// http://cpp.sh/47vph url en cpp.sh ***** Maria Alejandra Acevedo Patiño ****** FUNDAMENTOS DE PROGRAMACIÓN 
