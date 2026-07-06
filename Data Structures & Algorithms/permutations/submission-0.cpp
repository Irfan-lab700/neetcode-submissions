class Solution {
public:
    void solve(vector<int>&nums, vector<int>&ans,vector<vector<int>>&result, vector<bool>&visit){
        if(ans.size() == nums.size()){
            result.push_back(ans);
            return;
        }
        for(int i  =0;i<nums.size();i++){
            if(visit[i])continue;
            visit[i]  =true;
            ans.push_back(nums[i]);
            solve(nums,ans,result,visit);
            ans.pop_back();
            visit[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>result;
        vector<bool>visit(nums.size(),false);
        solve(nums,ans,result,visit);
        return result;
        
    }
};
