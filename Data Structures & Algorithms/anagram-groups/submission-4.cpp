class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ana;
        for (const string& str:strs){
            string sortstr=str;
            sort(sortstr.begin(),sortstr.end());
            ana[sortstr].push_back(str);
        }
        vector<vector<string>> res;
        for(auto&[str,v]:ana){
            res.push_back(v);
        }
        return res;
    }
};
