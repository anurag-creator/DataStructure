#include<iostream>
#include<climits>
using namespace std;
/* //Brute Force Approach
int MaxProfit(int arr[],int start,int end){
      if(end<=start){
          return 0;
      }
      int profit=0;
      for(int i=start;i<end;i++){
          for(int j=i+1;j<=end;j++){
              if(arr[j]>arr[i]){
                  int currentProfit=arr[j]-arr[i]+MaxProfit(arr,start,i-1)+MaxProfit(arr,j+1,end);
                  profit=max(profit,currentProfit);
              }
          }
          
      }
      return profit;
}*/
// O(n) Approach 
int MaxProfit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
             profit+=arr[i]-arr[i-1];
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<MaxProfit(arr,0,n-1);
    cout<<MaxProfit(arr,n);
}