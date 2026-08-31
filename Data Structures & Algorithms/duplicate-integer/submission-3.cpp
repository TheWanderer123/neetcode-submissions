class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>diff;
        for(int num:nums){
            if (diff.count(num)) return 1;
            diff.insert(num);
        }
        return 0;
    }
};