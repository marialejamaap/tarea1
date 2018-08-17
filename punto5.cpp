// Example program
#include <iostream>
#include <string>
int main()
{
  float a,b;
  std::cout<<"Ingrese tres numeros flotantes: \n";
  std::cin>> a >> b ;
  a==b? std::cout << a <<" es igual a " << b: a>b? std::cout << a << " es mayor que: " << b: std::cout<<b <<" es mayor que: " << a;
  return 0;
}
