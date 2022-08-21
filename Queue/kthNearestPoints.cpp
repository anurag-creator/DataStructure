class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<vector<int>> pq;
        int n = points.size();
        for(auto it:points)
        {
            int x = it[0];
            int y = it[1];
            pq.push({x*x+y*y,x,y});
        }
        while(pq.size()>k)
        {
            auto it = pq.top();
            pq.pop();
        }
        while(!pq.empty())
        {
            vector<int> t = pq.top();
            pq.pop();
            ans.push_back({t[1],t[2]});
        }
        return ans;
    }
};