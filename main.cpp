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
   int X=0,Y=0,X1=0,Y1=0,X2=0,Y2=0,X3=0,Y3=0,XD=0,OX=0;
   int xLine=0, oLine=0;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i]=='X'&&str2[i]=='X'&& str3[i]=='X')
            xLine++;
        if(str1[i]=='O'&& str2[i]=='O' && str3[i]=='O')
            oLine++;
    }
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] == 'X') {
            X1++;
            X++;
        }
        if (str1[i] == 'O') {
            Y1++;
            Y++;
        }
        if (str2[i] == 'X') {
            X2++;
            X++;
        }
        if (str2[i] == 'O') {
            Y2++;
            Y++;
        }
        if (str3[i] == 'X') {
            X3++;
            X++;
        }
        if (str2[i] == 'O') {
            Y3++;
            Y++;
        }
        if (X1 == str1.length())
            xLine++;
        if (X2 == str2.length())
            xLine++;
        if (X3==str3.length())
            xLine++;
        if (Y1==str1.length())
            oLine++;
        if (Y2==str2.length())
            oLine++;
        if (Y3==str3.length())
            oLine++;
    } if (oLine==0&& xLine==0) {
        std::string strOne;
        for (int i = 0; i < str1.length(); ++i) {
            strOne += str1[i];
            strOne += str2[i];
            strOne += str3[i];
        }
        for (int i = 0; i <= strOne.length(); i += (str1.length() + 1)) {
            if (strOne[i] == 'X')
                XD++;
            if (strOne[i] == 'O')
                OX++;
        }
        if (XD==str1.length())
            xLine++;
        if (OX==str1.length())
            oLine++;
        if(oLine==0 || xLine==0) {
            XD=0;
            OX=0;
            for (int i = str1.length()-1; i < strOne.length(); i += str1.length()-1) {
                if (strOne[i] == 'X')
                    XD++;
                if (strOne[i] == 'O')
                    OX++;
            }
            if (XD==str1.length())
                xLine++;
            if (OX==str1.length())
                oLine++;
        }
    }

    if(xLine==1 && X>Y && oLine!=xLine&& oLine==0&&Y!=0)
    {
        return 1;
    }
    else if(oLine==1 && Y==X && oLine!=xLine&&X!=0)
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
           std::cout<<"Petya won\n";
       else if(result==0)
           std::cout<<"Vanya won\n";
       else if(result==2)
           std::cout<<"Incorrect\n";
       else
           std::cout<<"Nobody\n";
   }
    else
       std::cout<<"Incorrect\n";
    return 0;
}
