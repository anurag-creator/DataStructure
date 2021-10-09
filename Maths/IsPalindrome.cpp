#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev=0;
    int temp=n;
    while(temp){
        int p= temp%10;
        rev=rev*10+p;
        temp=temp/10;
    }
    if(rev==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=121;
    cout<<isPalindrome(n);
}