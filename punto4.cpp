/* Punto 4. Programe una aplicación que reciba un número entero de 5 dígitos, por ejemplo 52463, y que responda con los dígitos que componen el número separados por tres espacios, por ejemplo:
5 2 4 6 3.*/
#include <iostream>
#include <string>
int main()
{
  int a,b,c,d,e,f;
  std::cout<<"ingrese un nC:mero de cinco dC-gitos: ";
  std::cin>> a;
  b=a/10000;
  c=a%10000/1000;
  d=a%1000/100;
  e=a%100/10;
  f=a%10/1;
  std::cout<<" \n el nC:mero separado en dC-gitos es: ";
  std::cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
  return 0;
}
