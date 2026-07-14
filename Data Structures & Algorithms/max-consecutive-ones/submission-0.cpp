class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int bestsum=0;
        int currsum=0;
        for (int i=0;i<nums.size();++i){
            if(nums[i]==1) {
                currsum++;
                bestsum=max(bestsum,currsum);
            }
            else currsum=0;
        }
        return bestsum;
    }
};