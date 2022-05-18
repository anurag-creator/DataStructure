class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        int res=0;
        for(int i=0;i<height.size()-1;i++){
            for(int j=i+1;j<height.size();j++){
                int area=min(height[i],height[j])*(j-i);
                res=max(res,area);
            }
        }
        return res;
        */
        int res=0;
        int start=0;
        int end=height.size()-1;
        while(start<end){
            int area=min(height[start],height[end])*(end-start);
            res=max(res,area);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return res;
    }
};