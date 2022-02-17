class Solution {
  void backtrack(vector<vector<int>> &output, vector<int> &current, vector<int> &candidates, int remain, int start){
    if(remain < 0)
        return;
    else if(remain == 0)output.push_back(current);
    else {
        for(int i=start;i<candidates.size();i++){
            current.push_back(candidates[i]);
            backtrack(output, current, candidates, remain - candidates[i], i);
            current.pop_back();
        }
    }
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> output;
    vector<int> current;
    sort(candidates.begin(), candidates.end());
    backtrack(output, current, candidates, target, 0);
    return output;
    }
};