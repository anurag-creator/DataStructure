#include<bits/stdc++.h>
#include<string>
using namespace std;
void patSearching(string &txt, string &part){
     int m=part.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++)
               if(part[j]!=txt[i+j])
                    break;
                if(j==m)
                     cout<<i<<" ";
    }
}
int main(){
   string str1="ABCABCD";
   string str2="ABCD";
   patSearching(str1,str2);
}
