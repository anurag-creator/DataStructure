#include<bits/stdc++.h>
using namespace std;
//Two pointer approach
bool isPresent(int *arr,int n,int sum){
   int start=0,end=n-1;
   while(start<=end){
       if(arr[start]+arr[end]==sum){
           return true;
       }
       else{
           arr[start]+arr[end]>sum ?end--: start++;
       }
   }
   return false;
}

int main() { 
	 int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 14;
    
    cout << isPresent(arr, n, sum);
} 