#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n!=0)
        return (x*power(x,n-1));
    else
        return -1;
}
double geoSum(int k){
    if(k==0)return 1;
    int ans=power(2,k);
    return ((double)1/ans)+geoSum(k-1);
}