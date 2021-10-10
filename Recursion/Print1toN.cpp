#include<iostream>
using namespace std;
void printNumber(int n){
    if(n==1){
        cout<<n<<" ";
    }
    else{
    printNumber(n-1);
    cout<<n<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printNumber(n);
}