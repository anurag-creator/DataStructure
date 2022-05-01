//Navive Solution
//Order of(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

//Naive Approach 2
//Order(N)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int start=0,end=nums.size()-1;
        int tempSum=0;
        while(start<end){
            tempSum=nums[start]+nums[end];
            if(tempSum=target){
                return {start,end};
            }
            if(tempSum>target){
                end--;
            }
            else{
                start++;
            }
        }
        return {-1,-1};
    }
};
