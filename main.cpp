#include <iostream>
#include <string>
bool str(std::string str){
    if (str.length()==3) {
        for (int i = 0; i < 3; ++i) {
            if(str[i]!='O'&& str[i]!='X'&& str[i]!='.' )
                return false;
        }
        return true;
    }
    else
    return false;
}
int main() {
   std::cout<<"Input the playing field in the format.\nValid characters 'X' 'O' and '.'\n";
   std::cout<<"X..\n";
   std::cout<<".O.\n";
   std::cout<<"..X\n";
   std::string str1;
   std::string str2;
   std::string str3;
   std::cin >> str1;
   std::cin >> str2;
   std::cin >> str3;
    std::cout<<str(str1);
    std::cout<<str(str2);
    std::cout<<str(str3);
    return 0;
}
