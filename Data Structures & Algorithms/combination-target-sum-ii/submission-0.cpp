class Solution {
public:
    vector<vector<int>>res;
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        res.clear();
        sort(nums.begin(),nums.end());
        vector<int>cur;
        dfs(nums,target,0,cur,0);
        return res;

        
    }
    void dfs(vector<int>&nums,int target, int i, vector<int>&cur, int total){
        if(total == target){
            res.push_back(cur);
            
            return;
        }
        if(total>target || i ==nums.size()){
            return;
        }
        cur.push_back(nums[i]);
        dfs(nums,target,i+1,cur,total+nums[i]);
        cur.pop_back();
        while(i+1<nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        dfs(nums,target,i+1,cur,total);
    }
};
