class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // vector<int> check(100000,0);
        // for (int i=0;i<nums.size();++i){
        //     if(check[nums[i]]==1) return true;
        //     ++check[nums[i]];
        // }
        // return false;
        sort(nums.begin(), nums.end());
        for(int i=1;i<nums.size();++i){
            if(nums[i]==nums[i-1]) return true;
        }
        return false;
    }
};