#include<iostream>
using namespace std;
int Fibo(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    int smallOutput1=Fibo(n-1);
    int smallOutput2=Fibo(n-2);
    return smallOutput1+smallOutput2;
}
int main(){
    int n;
    cin>>n;
    cout<<Fibo(n);
}