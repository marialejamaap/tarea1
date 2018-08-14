// Punto # 2. Escriba una aplicación que pregunte por dos números enteros y responda indicando cuál de ellos es el mayor. 


#include <iostream>
#include <string>

int main()
{
    int a,b; // se definen que tipo de  variables van a utilizarse
  std::cout <<" ingrese dos numeros \n"; 
  std::cout <<" ingrese valor de a: ";// pide ingresar el primer número 
  std::cin>>a; 
  std::cout<<"\n ingrese valor de b: ";// pide ingresar el segundo número 
  std::cin>>b; 
  a>b?std::cout <<"\n a es mayor que b":a<b? std::cout <<"\n b es mayorque a" :std::cout<<"\n a es igual a b" ; 
  // condicional a través del operador ternario (condición?valor si es verdadero: valor si es falso) 
  // :std::cout<<"\n a es igual a b" ---> operador ternario anidado para mostrar si los números son iguales  
  return 0;
  
  // http://cpp.sh/8mexu url en cpp.sh ***** Maria Alejandra Acevedo Patiño***** FUNDAMENTOS DE PROGRAMACIÓN***John Restrepo
