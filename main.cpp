#include <iostream>
#include <string>
int main() {
   std::string str1;
   std::string str2;
   std::string str3;
   std::cout<<"Input playing field in the format\n";
   std::cout<<"X..\n";
   std::cout<<".O.\n";
   std::cout<<"..X\n";
   std::cin >> str1;
   std::cin >> str2;
   std::cin >> str3;
   std::cout <<std::endl;
    std::cout <<str1<<std::endl;
    std::cout <<str2<<std::endl;
    std::cout <<str3<<std::endl;
    return 0;
}
