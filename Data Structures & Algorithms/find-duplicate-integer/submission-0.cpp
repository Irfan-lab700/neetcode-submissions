class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = nums[0];
        int fast = nums[0];
        int ptr = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);
        while(ptr!=slow){
            ptr= nums[ptr];
            slow = nums[slow];
        }
        return ptr;
        
    }
};
