#include<bits/stdc++.h>
using namespace std;
//recursive Approach
//complexity exponential
/*
int lcs1(string s1, string s2,int m,int n){
   if(m==0 || n==0)return 0;
   if(s1[n-1]==s2[m-1])
        return 1+lcs(s1,s2,n-1,n-2);
   else
       return max(lcs(s1,s1,m-1,n),lcs(s1,s2,m,n-1));
   
}*/
//Method 2
//Memoization
int memo[1000][1000];
int lcs(string s1,string s2,int m,int n){
   if(memo[m][n]!=-1)
        return memo[m][n];
        
    if(m==0 || n==0)
        memo[m][n]=0;
        
    else{
        if(s1[m-1]==s2[n-1])
            memo[m][n] = 1 + lcs(s1,s2,m-1,n-1);
        else
            memo[m][n] = max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
    }
    
    return memo[m][n];
}
int main(){
    string s1="AXYZ",s2="BAZ";
    int m=4,n=3;
    memset(memo,-1,sizeof(memo));
    cout<<lcs(s1,s2,m,n);
}