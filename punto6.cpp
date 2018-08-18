//Punto 6. Desarrolle una aplicación que reciba tres strings y responda indicando cuál de todos ellos es el primero alfabéticamente.
#include <iostream>
#include <string>
int main()
{
std::string str1,str2, str3,x,y,z;
std::cout << "ingresar strings: \n";
getline (std::cin, str1);
getline (std::cin, str2);
getline (std::cin, str3);
(str1<str2&&str1<str3)?z=str1:(str1<str2&&str1>str3)||(str1>str2&&str1<str3)?y=str1:x=str1;//posiciones para string 1
(str2<str1&&str2<str3)?z=str2:(str2<str1&&str2>str3)||(str2>str1&&str2<str3)?y=str2:x=str2;//posiciones para string 2
(str3<str2&&str3<str1)?z=str3:(str3<str2&&str3>str1)||(str3>str2&&str3<str1)?y=str3:x=str3;// posiciones para string 3
std::cout<<"\n"<< z <<"\n"<< y <<"\n"<< x;
return 0;
}
