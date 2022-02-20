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
/*
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
*/
//Tabulation
int lcs(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    
    int dp[m+1][n+1];
    
    for(int i=0;i<=m;i++)
        dp[i][0]=0;
    
    for(int j=0;j<=n;j++)
        dp[0][j]=0;
        
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return dp[m][n];
    
}

int main(){
    string s1="AXYZ",s2="BAZ";
    int m=4,n=3;
   // memset(memo,-1,sizeof(memo));
    //cout<<lcs(s1,s2,m,n);
    cout<<lcs(s1,s2);
}