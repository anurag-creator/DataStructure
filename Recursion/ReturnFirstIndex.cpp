#include<iostream>
using namespace std;
int checkNumberFirstIndex(int arr[],int n,int x){
    if(n==0) return -1;
    if(arr[0]==x)return 0;
    int ans=checkNumberFirstIndex(arr+1,n-1,x);
    if(ans!=-1){
        return ans+1;
    }
    else{
        return -1;

    }

}
int main(){
int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<checkNumberFirstIndex(arr,n,4);
}