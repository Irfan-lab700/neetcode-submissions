class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        map<int,int>mp;
        sort(hand.begin(),hand.end());
        if(n%groupSize !=0){
            return false;
        }
        for(int val:hand){
            mp[val]++;
        }
        for(auto it:mp){
            if(mp[it.first] >0){
                for(int i  =1;i<groupSize;i++){
                    mp[it.first+i] -= mp[it.first];
                    if(mp[it.first+i]<0){
                        return false;
                    }
                }
            }
        }
        return true;

        
    }
};
