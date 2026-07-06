class Solution {
public:
    void solve(vector<int>&nums,vector<int>&ans,vector<vector<int>>&result,int i ){
        if(i == nums.size()){
            result.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,ans,result,i+1);
        ans.pop_back();
        while(i+1<nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        solve(nums,ans,result,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        
        solve(nums,ans,result,0);
        return result;
        
    }
};