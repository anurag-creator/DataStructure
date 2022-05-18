class Solution {
public:
    vector<int> searchRange(vector<int>& A, int target) {
        int l=0,r=size(A)-1,first=-1,last=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(A[m]==target){
                first=m;
                r=m-1;
            }
            else if(A[m]>target) r=m-1;
            else l=m+1;
        }
        l=0,r=size(A)-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(A[m]==target){
                last=m;
                l=m+1;
            }
            else if(A[m]>target) r=m-1;
            else l=m+1;
        }
        return {first,last};
    }
};