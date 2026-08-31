class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(const string& detail:details){
            if((detail[11]-'0')*10+(detail[12]-'0')>60) ++res;
        }
        return res;
    }
};