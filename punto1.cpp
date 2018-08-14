// Punto #1 Escriba una aplicación que demuestre que al convertir de int a float no hay perdida de
//información y que de lo contrario si la hay. Hágalo usando cambio de tipo explícito e implícito.

#include <iostream>
#include <string>
int main()
{
int a,b; // definir tipo de variables (variable tipo entero)
float division;// definir variables (variable tipo float/ flotante)
std::cout << " ingrese dos numeros enteros a y b : \n"; //pide dos números  \n para cambio de línea
std::cin >> a >>b; // ingresar numeros 
division= (float)a/b; // división *****type casting***** explícito  NOTACIÓN FUNCIONAL
std::cout << " la division entre a y b  es: ";
std::cout << division; // No se  pierde información, se guardan los decimales de la división 
std::cout<<"\n el resultado de flotante  a  entero es: ";
int nuevadivision =division; // al realizar la conversion de la división que estaba en flotante a  entero se pierden los decimales 
std::cout<<nuevadivision;
return  0; // confirma que se finalizó el programa 
}
//cpp.sh/2iiw2  (url dada en cpp.sh) ****** Maria Alejandra Acevedo Patiño ******** FUNDAMENTOS DE PROGRAMACION *** Profesor: JohnRestrepo
