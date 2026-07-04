class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();
        bool first = false;
        bool sec = false;
        bool third = false;
        for(int i = 0;i<n;i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] ||triplets[i][2]>target[2]){
                continue;
            }
            if(triplets[i][0] == target[0]){
                first = true;
            }
            if(triplets[i][1] == target[1]){
                sec = true;
            }
            if(triplets[i][2] == target[2]){
                third = true;
            }

        }
        return (first && sec && third);
        
    }
};