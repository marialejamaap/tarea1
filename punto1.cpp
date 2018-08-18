// Punto #1 Escriba una aplicación que demuestre que al convertir de int a float no hay perdida de
//información y que de lo contrario si la hay. Hágalo usando cambio de tipo explícito e implícito.


// De forma explícita 
#include <iostream>
#include <string>
int main()
{
int a ; // definir tipo de variables (variable tipo entero)
float c;
std::cout << " ingrese un numero entero \n";   
std::cin >> a; // ingresar numeros
c=(float)a; // type casting 
std::cout << " el numero en flotante es: \n" << c ; // no se pierde info  
return 0; }


// De forma implicíta 
#include <iostream>
#include <string>
int main()
{
int a ; // definir tipo de variables (variable tipo entero)
float c;// 
std::cout << " ingrese un numero entero \n";   
std::cin >> a; // ingresar numeros
c=a;
std::cout << " el numero en flotante es: \n" << c ; // no se pierde info
return 0; }



// De forma implicíta
#include <iostream>
#include <string>
int main()
{
int a ; // definir tipo de variables (variable tipo entero)
float c;
std::cout << " ingrese un numero flotante \n";   
std::cin >> c; // ingresar numeros
a=c;
std::cout << " el numero entero es: \n" << a ;//se pierden los decimales
return 0; }

 // De forma explicíta
#include <iostream>
#include <string>
int main()
{
int a ; // definir tipo de variables (variable tipo entero)
float c;
std::cout << " ingrese un numero flotante \n";   
std::cin >> c; // ingresar numeros
a=(int)c;// type casting
std::cout << " el numero entero es: \n" << a ; //se pierden los decimales
return 0; } 
