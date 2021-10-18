#include<bits/stdc++.h>
using namespace std;
int GPSum(int x,int n){
    if(n!=0)
        return (x*GPSum(x,n-1));
    else
        return -1;
}
int main(){

}