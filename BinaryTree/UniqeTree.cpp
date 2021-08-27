class Solution {
    int  catlan_Number(int n){
        int catlan[n+1];
        catlan[0]=catlan[1]=1;
        for(int i=2;i<=n;i++){
            catlan[i]=0;
            for(int j=0;j<i;++j){
                catlan[i]+=catlan[j]*catlan[i-j-1];
            }
        }
        return catlan[n];
    }
public:
    int numTrees(int n) {
        return catlan_Number(n);
    }
};