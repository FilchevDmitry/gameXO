#include <iostream>
#include <string>
std::string str(){
    std::string str;
    std::cin >> str;
    return str;
}
int main() {
   std::cout<<"Input the playing field in the format. Valid characters 'X' 'O' and '.'\n";
   std::cout<<"\t\tX..\n";
   std::cout<<"\t\t.O.\n";
   std::cout<<"\t\t..X\n";
    for (int i = 0; i < 3; ++i) {
        str();
    }



    return 0;
}
