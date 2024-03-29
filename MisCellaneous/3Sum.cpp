class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<n && j<k){
                if(nums[j]+nums[k]== -nums[i]){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(k!=0 && nums[k]==nums[k-1]) k--;
                    while(j!=n-1 && nums[j]==nums[j+1])j++;
                    j++,k--;
                }
                else if(nums[j]+nums[k]>-nums[i]){
                    while(k!=0 && nums[k]==nums[k-1]) k--;
                    k--;
                }
                else{
                    while(j!=n-1 && nums[j]==nums[j+1]) j++;
                    j++;
                }
            }
            while(i!=n-1 && nums[i]==nums[i+1]) i++;
        }
        for(auto triplate: ans)
            sort(triplate.begin(),triplate.end());
        return ans;
            
        
    }
};