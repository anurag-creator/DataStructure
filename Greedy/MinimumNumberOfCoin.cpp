#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int MinimumNumberOfCoin(int coin[],int n,int ammount){
     sort(coin,coin+n);
     int res=0;
     for(int i=n-1;i>=0;i--){
         if(coin[i]<=ammount){
             int c=floor(ammount/coin[i]);
             res=res+c;
             ammount=ammount-c*coin[i];
         }
         if(ammount==0)
             break;   
     }
     return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MinimumNumberOfCoin(arr,n,58);
}