class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        for(int i= 0;i<n;i++){
            string st = strs[i];
            int a = st.length();
            
            s = s+ to_string(a)+"#"+st;
            
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string>sdec;
        int i = 0;
        while(i<s.length()){
            int j = i;
            while(s[j] !='#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,len);
            sdec.push_back(str);
            i = j+1+len;
        }
        return sdec;



    }
};
