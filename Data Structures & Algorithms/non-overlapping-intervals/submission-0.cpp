class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int cont = 0;
        vector<vector<int>>ans;
        int n  =intervals.size();
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for(int i =1;i<n;i++){
            if(intervals[i][0] < ans[ans.size()-1][1]){
                cont++;
                ans[ans.size()-1][1] = min(ans[ans.size()-1][1], intervals[i][1]);

            }
            else{
                ans.push_back(intervals[i]);
            }

        }
        return cont ;


        
    }
};