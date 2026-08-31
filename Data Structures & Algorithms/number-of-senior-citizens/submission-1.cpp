class Solution {
public:
    int countSeniors(vector<string>& details) {
        int res=0;
        for(const string& detail:details){
            if(detail[11]>'6'||(detail[11]=='6' && detail[12]>'0')) ++res;
        }
        return res;
    }
};