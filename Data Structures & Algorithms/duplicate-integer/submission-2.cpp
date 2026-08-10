class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>diff;
        for(int num:nums){
            diff.insert(num);
        }
        return(diff.size()!=nums.size());
    }
};