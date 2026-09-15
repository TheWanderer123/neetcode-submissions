class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        // input từng cái trong vào stack
        if(s[0]==')'||s[0]=='}'||s[0]==']') return 0;
        for(char c:s){
            if(c=='('||c=='{'||c=='[') {st.push(c);}
            else{
                if(st.empty()) return 0;
                if((c==')' && st.top()=='(') || (c=='}' && st.top()=='{') || (c==']' && st.top()=='[')) {st.pop();} else return 0;
        }}
        return (st.empty());
    }
};
