class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res=0.0;
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }        
        sort(nums1.begin(),nums1.end());
        int x=nums1.size();
        if(x%2==0){
            res=(nums1[x/2]+nums1[(x/2)-1])/2.0;
        }else{
            res=nums1[(x-1)/2];
        }
        return res;
    }    
    }
};