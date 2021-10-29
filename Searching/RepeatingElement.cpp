#include<bits/stdc++.h>
using namespace std;
//Method 1 SuperNaive O(n^2) & O(1)space
int repeat1(int *arr,int n){
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]==arr[j])
                return arr[i];
         }
     }
}
//Method 2 Naive O(nlogn) & O(1)space
int repeat2(int *arr,int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
               return arr[i];
    }
}
//Method 3 Efficient O(n) & O(n)space
int repeat(int * arr,int n){
    bool visited[n];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n-1;i++){
        if(visited[arr[i]])
            return arr[i];
        visited[arr[i]]=true;
    }
}
int main() {
 int arr[] = {0, 2, 1, 3, 2, 2}, n= 6;
 cout << repeat(arr, n);

}