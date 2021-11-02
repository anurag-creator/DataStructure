#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int *arr,int n){
   //Find Min
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main(){
    int arr[]={4,2,19,32,1,3,6},n=7;
    SelectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}