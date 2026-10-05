class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m  = t.length();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c:t){
            mp1[c]++;
        }
        int minlen = INT_MAX;
        int have = 0;
        int need = mp1.size();
        int left = 0;
        int start = 0;
        for(int right = 0;right<n;right++){
            char c = s[right];
            mp2[c]++;
            if(mp1.count(c) && mp2[c] ==mp1[c]){
                have++;
            }
            while(have == need){
                if((right-left+1)<minlen){
                    minlen = right-left+1;
                    start = left;
                }
                char ch = s[left];
                mp2[ch]--;
                if(mp1.count(ch) && mp2[ch]<mp1[ch]){
                    have--;
                }
                left++;
            }
        }
        if(minlen ==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);

        
    }
};
