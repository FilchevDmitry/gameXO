#include <iostream>
#include <string>
std::string str(){
    std::string str;
    std::cin >> str;
    return str;
}
int main() {
   std::cout<<"Input playing field in the format\n";
   std::cout<<"X..\n";
   std::cout<<".O.\n";
   std::cout<<"..X\n";
    for (int i = 0; i < 3; ++i) {
        str();
    }



    return 0;
}
