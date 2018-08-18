// Punto 6.

#include <iostream>

#include <string>

int main()

{
std::string str1;
std::string str2;
std::string str3;

std::cout << "ingresar strings: ";
getline (std::cin, str1);
getline (std::cin, str2);
getline (std::cin, str3);
std::cout << "Escriba palabra 1: ";
str1>str2?str1>str3?std::cout<<"str1":str2>str1?str2>str3?std::cout<<"str2":str3;
return 0;

}
