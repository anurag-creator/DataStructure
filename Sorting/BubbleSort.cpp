#include<iostream>
using namespace std;
void BubbleSort1(int *arr,int n){
   for(int i=0;i<n;i++){
       for(int j=0;j<n-1-i;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
       }
   }
}
//Optimization
void BubbleSort(int *arr,int n){
    bool SWAP=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                SWAP=true;
            }
        }
        if(SWAP==false)
              break;
    }
}
int main(){
  int arr[]={5,2,10,8,7,2,1},n=7;
  for(int i=0;i<n;i++){
      cout<<i<<" ";
  }
  cout<<endl;
  BubbleSort(arr,n);
  cout<<"After Sorting"<<endl;
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
}