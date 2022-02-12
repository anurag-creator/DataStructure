#include<bits/stdc++.h>
using namespace std;
void FindingMising(int *arr1,int *arr2,int n,int m){
   unordered_set<int>s;
   for(int i=0;i<m;i++)
       s.insert(arr2[i]);
   
   for(int i=0;i<n;i++)
       if(s.find(arr1[i])==s.end())
           cout<<arr1[i]<<" ";
}
int main(){
    int arr1[]={1, 2, 6, 3, 4, 5};
    int arr2[]={2, 4, 3, 1, 0 };
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    FindingMising(arr1,arr2,n,m);
    return 0;
}