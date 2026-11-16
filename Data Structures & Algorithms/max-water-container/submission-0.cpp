class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxWater =0;
        int l =0, r=n-1;
        while(l<r){
            int width = r-l;
            int height = min(heights[l], heights[r]);
            int area = width * height;
            maxWater = max(maxWater, area);
            if(heights[l] > heights[r]){
                r--;
            }else{
                l++;
            }
        }
        return maxWater;
        
    }
};
