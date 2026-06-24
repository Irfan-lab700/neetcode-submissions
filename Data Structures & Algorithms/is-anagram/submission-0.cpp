class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n  = t.length();
        if(m!=n){
            return false;
        }
        unordered_map<char,int>map;
        for(char c:s){
            map[c]++;
        }
        for(char c:t){
            map[c]--;
        }
        for(auto it:map){
            if(map[it.first] !=0){
                return false;
            }
        }
        return true;

        
    }
};
