class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int best=0;
        while(l<r){
            int height=min(heights[l],heights[r]);
            int current=height*(r-l);
            best=max(best,current);
            if(heights[l]<heights[r]){++l;} 
            else {--r;}
        }
        return best;
    }
};
