#include<bits/stdc++.h>
using namespace std;
int stairCase(int n){
    if(n==1 || n==0)return 1;
    else if(n==2)return 2;
    else return stairCase(n-3)+stairCase(n-2)+stairCase(n-1);
}
int main(){
    cout<<"No of Ways "<<stairCase(5);
}