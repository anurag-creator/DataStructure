#include<iostream>
#include<climits>
using namespace std;
void SortZeroOneTwo(int arr[],int n){
     int zero=0,one=0,two=0;
     for(int i=0;i<n;i++){
         if(arr[i]==0){
             zero++;
         }
         else if(arr[i]==1){
             one++;
         }
         else{
             two++;
         }
     }
int j=0;
     while(zero--){
         arr[j]=0;
         j++;
     }
     while(one--){
         arr[j]=1;
         j++;
     }
     while(two--){
         arr[j]=2;
         j++;
     }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< " Sort Zero One Two " <<endl;
    SortZeroOneTwo(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}