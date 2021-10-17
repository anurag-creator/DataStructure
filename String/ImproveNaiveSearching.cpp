#include<bits/stdc++.h>
using namespace std;
//char are Dinstint over all comlextiy linear
void patSearching(string &txt,string &part){
    int m=part.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);  ){
        int j;
        for(j=0;j<m;j++)
        if(part[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" ";
        if(j==0){
        i++;}
        else{
        i=(i+j);}
    }
}
int main(){
   string str1="ABCDEFG";
   string str2="ABCD";
   patSearching(str1,str2);
}