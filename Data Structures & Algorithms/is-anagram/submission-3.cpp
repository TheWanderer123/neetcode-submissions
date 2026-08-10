class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return(s==t);
        
        // if(s.size()!=t.size()) return 0;
        // vector<int>freq(26,0);
        // for(int i=0;i<s.size();++i){
        //     ++freq[s[i]-'a']; --freq[t[i]-'a'];
        // }
        // for (int num:freq){
        //     if (num!=0) return 0;
        // }
        // return 1

        if(s.size()!=t.size()) return 0;
        unordered_map<char,int>map;
        map.reserve(s.size());
        for(int i=0;i<s.size();++i){
            ++map[s[i]];--map[t[i]];
        }
        for(const auto&[c,n]:map){
            if(n!=0) return 0;
        }
        return 1;
    }
};
