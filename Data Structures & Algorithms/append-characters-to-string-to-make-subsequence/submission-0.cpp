class Solution {
public:
    int appendCharacters(string s, string t) {
        int tp=0;
        int sp=0;
        while (tp<t.length()&&sp<s.length()){
            if(t[tp]==s[sp]) ++tp; 
            ++sp;
        }
        if (tp==t.length()) return 0;
        return t.length()-tp;
    }
};