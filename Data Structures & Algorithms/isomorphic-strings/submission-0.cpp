class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapS_T;
        unordered_map<char,char>mapT_S;
        if(s.size()!=t.size()) return 0;
        for(int i=0;i<s.size();++i){
            if(mapS_T.find(s[i])!=mapS_T.end()){
                if(mapS_T[s[i]]!=t[i]) return 0;
            } else mapS_T[s[i]]=t[i];

            if(mapT_S.find(t[i])!=mapT_S.end()){
                if(mapT_S[t[i]]!=s[i]) return 0;
            } else mapT_S[t[i]]=s[i];
        }
        return 1;
    }
};