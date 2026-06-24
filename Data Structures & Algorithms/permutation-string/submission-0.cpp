class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        int n = s2.length();
        if(k>n) return false;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char c:s1){
            freq1[c]++;
        }
        for(int i = 0;i<k;i++){
            freq2[s2[i]]++;
        }
        if(freq1== freq2){
                return true;
        }
        for(int i = k;i<n;i++){
            freq2[s2[i-k]]--;
            if(freq2[s2[i-k]] == 0){
               freq2.erase(s2[i-k]);
            }
            freq2[s2[i]]++;
            if(freq1 == freq2){
                return true;
            }
        }
        return false;


            



        
    }
};