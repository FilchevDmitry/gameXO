#include <iostream>
#include <string>
bool checking (std::string str){
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
int combinations(std::string str1,std::string str2,std::string str3){
    for (int i = 0; i < 3; ++i) {
        if (str1[i]==str2[i]==str3[i]=='X')
            return 1;
        if(str1[i]==str2[i]==str3[i]=='O')
            return 0;
    }
        if (str1[0]==str1[1]==str1[2]=='X' || str2[0]==str2[1]==str2[2]=='X' || str3[0]==str3[1]==str3[2]=='X')
            return 1;
        if(str1[0]==str1[1]==str1[2]=='O' || str2[0]==str2[1]==str2[2]=='O' || str3[0]==str3[1]==str3[2]=='O')
            return 0;
        if (str1[0]==str2[1]==str3[2]=='X' | str1[2]==str2[1]==str3[0]=='X')
            return 1;
        if(str1[0]==str2[1]==str3[2]=='O' | str1[2]==str2[1]==str3[0]=='O')
            return 0;
    }

int main() {
   std::cout<<"Input the playing field in the format.\nValid characters 'X' 'O' and '.'\n";
   std::cout<<"X..\n";
   std::cout<<".O.\n";
   std::cout<<"..X\n";
   std::string str1,str2,str3;
   std::cin >> str1>>str2>>str3;
   if (checking(str1)&&checking(str2)&&checking(str3)){
       std::cout<<"OK";
       if(combinations(str1,str2,str3)==1)
           std::cout<<"VASA\n";
       else if(combinations(str1,str2,str3)==0)
           std::cout<<"VOVA\n";
       else
           std::cout<<"Incorrect\n";
   }
    else
       std::cout<<"Incorrect\n";
    return 0;
}
