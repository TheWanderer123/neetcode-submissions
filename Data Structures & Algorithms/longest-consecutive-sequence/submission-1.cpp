class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int max_sequence=0;
        for (int num:numset){
            if(!numset.count(num-1)){
                int curr_num=num;
                int curr_sequence=1;
                while(numset.count(curr_num+1)){
                    ++curr_num;++curr_sequence;
                }
                max_sequence=max(max_sequence,curr_sequence);
            }
        }
        return max_sequence;
    }
};
