#include<bits/stdc++.h>
using namespace std;
//Recursive Approach
int supSub(string s1,string s2,int m,int n){
   if(!m)
    return n;
   if(!n)
     return m;
   
   if(s1[m-1]==s2[n-1])
        return 1+supSub(s1,s2,m-1,n-1);
    else
        return min(supSub(s1,s2,m-1,n),supSub(s1,s2,m,n-1));
    
}
int main(){
    char str1[]="AGGTAB";
    char str2[]="GXTXAYB";
    cout<<"ShortestCommonSubsequence"<<" "<<supSub(str1,str2,strlen(str1),strlen(str2));
}