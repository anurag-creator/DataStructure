/*
arr=[15,10,18,12,4,6,2,8]
o/p=[-1,15,-1,18,12,12,6,12]
*/
#include<bits/stdc++.h>
using namespace std;
//Naive Approach
void PreviousGreterElement(int *arr,int n){
    for(int i=0;i<n;i++){
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[i]<arr[j]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<" -1"<<" ";
        }
    }
}

//Efficient Approach
void PreviousGreterElement2(int *arr,int n){
   stack<int>s;
   s.push(arr[0]);
   for(int i=0;i<n;i++){
       while(s.empty()==false && s.top()<=arr[i]){
           s.pop();
       }
       int prevGret=s.empty()?-1:s.top();
       cout<<prevGret<<" ";
       s.push(arr[i]);
   }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    PreviousGreterElement2(arr,n);
}