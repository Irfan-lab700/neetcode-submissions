class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        int n = s2.length();
        if(k>n)return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c:s1){
            mp1[c]++;
        }
        for(int i = 0;i<k;i++){
            mp2[s2[i]]++;
        }
        if(mp1== mp2){
            return true;
        }
        for(int i  =k;i<n;i++){
            mp2[s2[i-k]]--;
            if(mp2[s2[i-k]]==0){
                mp2.erase(s2[i-k]);
            }
            mp2[s2[i]]++;
            if(mp1 == mp2){
                return true;
            }


        }
        return false;



            



        
    }
};