#include<iostream>
#include<climits>
using namespace std;
/*void leftRotatebyone(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
              arr[i-1]=arr[i];
        arr[n-1]=temp;
}
void leftRotatebyd(int arr[],int n,int d){
        for(int i=0;i<d;i++)
                  leftRotatebyone(arr,d);
}*/
//reverse algorithm
void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotatebyd(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the velue of D"<<endl;
    int d;
    cin>>d;
    leftRotatebyd(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}