#include<iostream>
#include<climits>
using namespace std;
//Brute Force Approach
/*int TrapingWater(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        int leftMax=arr[i];
        for(int j=0;j<i;j++){
            leftMax=max(leftMax,arr[j]);
            int rightMax=arr[i];
            for(int j=i+1;j<n;j++){
                rightMax=max(rightMax,arr[j]);
                res=res+min(leftMax,rightMax)-arr[i];
            }
        }
    }
    return res;
}*/

int TrapingWater(int arr[],int n){
    int leftMax[n],rightMax[n];
    int res=0;
    leftMax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],arr[i]);
    }
    rightMax[n-1]=arr[n-1];
    for(int i=n-2;i>0;i--){
        rightMax[i]=max(rightMax[i+1],arr[i]);
    }
    for(int i = 1; i < n - 1; i++){
    		res=res+(min(leftMax[i],rightMax[i])-arr[i]);
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
    //cout<<MaxProfit(arr,0,n-1);
    cout<<TrapingWater(arr,n);
}