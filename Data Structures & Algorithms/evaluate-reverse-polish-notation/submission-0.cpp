class Solution {
public:
    bool isOp(string s) {
        return (s == "+" || s == "-" || s == "*" || s == "/");
    }
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        for(int i = 0;i<n;i++){
            string a = tokens[i];
            if(isOp(a)){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(a == "+") st.push(first+second);
                else if (a =="-") st.push(second-first);
                else if (a =="*") st.push(first*second);
                else if (a =="/") st.push(second/first);
            }
            else{
                st.push(stoi(a));
            }
            }
        

        return st.top();
        
    }
};
