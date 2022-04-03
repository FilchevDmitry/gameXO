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
   int X=0,Y=0,X1,X2,X3,u1,u2,u3;
   int xLine=0, oLine=0;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i]=='X'&&str2[i]=='X'&& str3[i]=='X')
            xLine++;
        if(str1[i]=='O'&& str2[i]=='O' && str3[i]=='O')
            oLine++;
    }
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i]=='X')
        {
            X++;
            X1++;
        }
        if (str2[i]=='X')
        {
            X++;
            X2++;
        }
        if (str3[i]=='X')
        {
            X++;
            X3++;
        }
        if (str1[i]=='O')
        {
            u1++;
            Y++;
        }
        if (str2[i]=='O')
        {
            u2;
            Y++;
        }
        if (str3[i]=='O')
        {
            u3++;
            Y++;
        }
        if(i==0)
            if(str1[i]=='X'&&str2[i+1]=='X'&& str3[i+2]){
                xLine++;
            }
    }
        if (X1+X2+X3==str1.length())
            xLine++;
        if(u1+u2+u3==str1.length())
            oLine++;
    if(xLine==1 && X>Y && oLine!=xLine&& oLine==0)
    {
        return 1;
    }
    else if(oLine==1 && Y==X && oLine!=xLine)
    {
        return 0;
    }
    else if (Y>X||(xLine!=0 && Y>=X)|| oLine==1 && X>=Y)
        return 2;
    else
        return 5;
}
int main() {
   std::cout<<"Input the playing field in the format.\nValid characters 'X' 'O' and '.'\n";
   std::cout<<"X..\n";
   std::cout<<".O.\n";
   std::cout<<"..X\n";
   std::string str1,str2,str3;
    int result=100;
   std::cin >> str1>>str2>>str3;
   if (checking(str1)&&checking(str2)&&checking(str3)){
        result=combinations(str1,str2,str3);
       if(result==1)
           std::cout<<"X Petya won\n";
       else if(result==0)
           std::cout<<"O Vanya won\n";
       else if(result==2)
           std::cout<<"Incorrect\n";
       else
           std::cout<<"Nobody\n";
   }
    else
       std::cout<<"Incorrect\n";
    return 0;
}
