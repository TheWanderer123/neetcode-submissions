class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique;
        for(const string& str:emails){
            size_t posat=str.find('@');
            string loc=str.substr(0,posat);
            string clean="";
            for (const char& c:loc){
                if(c=='+') break;
                if(c!='.') clean+=c;
            }
            if(clean.size()==0) continue;
            string dom=str.substr(posat);
            if (dom.size()<6) continue;
            clean+=dom;
            unique.insert(clean);
        }
        return unique.size();
    }
};