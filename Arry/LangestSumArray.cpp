#include<iostream>
#include<climits>
using namespace std;
int LangestSumArray(int arr[],int n){
    int maxsum=INT_MIN;
    int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+arr[i];
         if(sum<arr[i]){
             sum=arr[i];
         }
         if(maxsum<sum){
             maxsum=sum;
         }
     }
     return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< "Maximum Sum SubArray :" <<endl;
    cout<<LangestSumArray(arr,n);
}