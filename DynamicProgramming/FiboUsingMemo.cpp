#include<iostream>
using namespace std;
int fib(int n){
    int memo[n+1];
    for(int i=0;i<n+1;i++){
        memo[i]=-1;
    }
    if(memo[n]==-1){
        int res;
        if(n==0 || n==1){
            return n;
        }
        else{
             res=fib(n-1)+fib(n-2);
        }
        memo[n]=res;     
    }
    return memo[n];
}
int main(){
    int n;
    cin>>n;
    cout<<"Nth Fibonacci "<<fib(n);
}