class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans=0;
        int l = 0;
        int r = 0;
        int i = 0;
        int j = n-1;
        while(i<j){
            l = max(l,height[i]);
            r = max(r,height[j]);
            if(l<r){
                ans += l- height[i];
                i++;
            }
            else{
                ans+= r-height[j];
                j--;
            }

        }
        return ans;




        
    }
};