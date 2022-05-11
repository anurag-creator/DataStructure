#include<bits/stdc++.h>
using namespace std;
const int R = 4, C = 4;
void LargestRowColSum(int arr[4][4],int R,int C){
     int maxSum=INT_MIN,index=-1;
     bool isRow=true;
     for(int i=0;i<R;i++){
         int rowSum=0;
         for(int j=0;j<C;j++){
             rowSum+=arr[i][j];
         }
         if(rowSum>maxSum){
             maxSum=rowSum;
             index=i;
         }
     }
     for(int j=0;j<C;j++){
         int colSum=0;
         for(int i=0;i<R;i++){
             colSum+=arr[i][j];
         }
         if(colSum>maxSum){
             isRow=false;
             maxSum=colSum;
             index=j;

         }
     }
     if(isRow){
         cout<<"Row"<<" ";
     }
     else{
         cout<<" Col"<<" ";
     }
     cout<<index<<" "<<maxSum<<endl;
}   
int main(){	
	int arr[R][C] = {
        {1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
    };
    LargestRowColSum(arr,R,C);
}