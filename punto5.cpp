// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"Ingrese tres numeros flotantes: \n";
cin>> a >> b >> c;
a>=b&&a>=c ? (cout<< "el mayor es: " <<a):(b>a&&b>=c)?(cout<< "el mayor es b: "<< b):(cout<<"el mayor es: " << c);
}
