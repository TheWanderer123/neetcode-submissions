class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int change=0;
        int i=0;
        while(i<flowerbed.size()){
            if(flowerbed[i]==1) {i+=2;}
            else {
                if((i==0||flowerbed[i-1]==0) && (i==flowerbed.size()-1||flowerbed[i+1]==0)) {++change;i+=2;}
                else {++i;}
            }
        }
        return (change>=n);
    }
};