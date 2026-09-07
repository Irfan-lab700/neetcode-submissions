class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n  = t.length();
        if(m!=n){
            return false;
        }
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            mp[c]--;
        }
        for(auto it:mp){
            if(mp[it.first] !=0){
                return false;
            }
        }
        return true;

        
    }
};
