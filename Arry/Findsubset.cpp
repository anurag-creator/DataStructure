#include<iostream>
using namespace std;
void findsubsetwithmaxsum(int input[], int n,int k){
     for(int i=0;i<n-2;i++){
         for(int j=i;j<i+3;j++){
             cout<<input[j]<<" ";
         }
         cout<<endl;
     }
}
int main(){
    int n;
    cout<<"Enter the size of arry"<<endl;
    cin>>n;
    int input[n];
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<n;i++){
         cin>>input[i];
    }
    int k=3;
    cout<<"Subsets are"<<endl;
    findsubsetwithmaxsum(input,n,k);
}