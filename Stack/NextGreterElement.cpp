/*Element       NGE
   4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1*/

   /*
arr=[15,10,18,12,4,6,2,8]
o/p=[-1,15,-1,18,12,12,6,12]
*/
#include<bits/stdc++.h>
using namespace std;
//Naive Approach
void NextGreter(int *arr,int n){
    for(int i=0;i<n;i++){
        int j;
        for( j=i+1;j>=0;j--){
            if(arr[i]<arr[j]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<" -1"<<" ";
        }
    }
}

//Efficient Approach
vector<int> NextGret2(int *arr,int n){
    vector<int>v;
   stack<int>s;
   s.push(arr[n-1]);
   v.push_back(-1);
   for(int i=n-2;i>=0;i--){
       while(s.empty()==false && s.top()<=arr[i]){
           s.pop();
       }
       int NextGret=s.empty()?-1:s.top();
       v.push_back(NextGret);
       s.push(arr[i]);
   }
    reverse(v.begin(),v.end());
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int x: NextGret2(arr,n)){
        cout<<x<< " ";   
    }
    return 0; 
}