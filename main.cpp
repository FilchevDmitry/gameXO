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
   int X=0,Y=0;
   int xLine=0, oLine=0;
    for (int i = 0; i < 3; ++i) {
        if (str1[i]=='X'&&str2[i]=='X'&& str3[i]=='X')
            xLine++;
        if(str1[i]=='O'&& str2[i]=='O' && str3[i]=='O')
            oLine++;

    }
    for (int i = 0; i < 3; ++i) {
        if (str1[i]=='X') X++;
        if (str2[i]=='X') X++;
        if (str3[i]=='X') X++;
        if (str1[i]=='O') Y++;
        if (str2[i]=='O') Y++;
        if (str3[i]=='O') Y++;
    }
        if (str1[0]=='X'&& str1[1]=='X'&&str1[2]=='X' || str2[0]=='X'&&str2[1]=='X'&&str2[2]=='X'
            || str3[0]=='X'&&str3[1]=='X'&& str3[2]=='X'|| str1[0]=='X'&& str2[1]=='X'&& str3[2]=='X'
            || str1[2]=='X'&& str2[1]=='X'&& str3[0]=='X' )
            xLine++;
        if(str1[0]=='O'&& str1[1]=='O'&&str1[2]=='O' || str2[0]=='O'&&str2[1]=='O'&&str2[2]=='O'
            || str3[0]=='O'&&str3[1]=='O'&& str3[2]=='O'|| str1[0]=='O'&& str2[1]=='O'&& str3[2]=='O'
            || str1[2]=='O'&& str2[1]=='O'&& str3[0]=='O')
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
       std::cout<<"OK\n";

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
