class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> numset;
    vector<int> new_nums;
    for (int i = 0; i < nums.size(); i++) {
      numset.insert(nums[i]);
    }
    set<int>::iterator it = numset.begin();
    while (it != numset.end()) {
      new_nums.push_back(*it);
      it++;
    }
    nums = new_nums;
    return numset.size();
    }
};