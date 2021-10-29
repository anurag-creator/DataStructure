class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        int start=0,end=numbers.size()-1;
        while(start<=end){
            if(numbers[start]+numbers[end]==target){
                res.push_back(start+1);
                res.push_back(end+1);
                return res;
            }/*
            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }*/
            else{
                numbers[start]+numbers[end]>target?end--:start++;
            }
        }
        return res;
    }
};