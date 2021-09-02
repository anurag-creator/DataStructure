#include<iostream>
#include<climits>
using namespace std;
void  MoveAllNegativeOneSide(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
            int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
               j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< " Move All Negative One side :" <<endl;
    MoveAllNegativeOneSide(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}