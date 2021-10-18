#include<bits/stdc++.h>
using namespace std;
void replacePI(string str[]){
    int n= str.length();
    if(str.length()==0 || str.length()==1)return;
    if(str[0]=='\0')return;
    if(str[0]=='p' && str[1]=='i'){
        int i=2;
        for(int i=n-1;i>=2;i++){
            str[i+2]=str[i];
        }
        str[i+2]=str[i];
        str[0]='3';
        str[1]='.';
        str[2]='1';
        str[3]='4';
        replacePI(str);
    }
    replacePI(str+1);
}