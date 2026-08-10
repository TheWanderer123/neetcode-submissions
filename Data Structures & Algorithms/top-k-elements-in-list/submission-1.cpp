class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int,int>cnt;
        for(int i=0;i<nums.size();++i){
            ++cnt[nums[i]];
        }
        vector<vector<int>>freq(nums.size()+1);
        for(auto&[num,c]:cnt){
            freq[c].push_back(num);
        }
        vector<int>res;
        for(int i=freq.size()-1;i>=0;--i){
            for(int num:freq[i]) {
                res.push_back(num);
                if (res.size()==k) return res;
            }
        }
        return res;
    }
};
