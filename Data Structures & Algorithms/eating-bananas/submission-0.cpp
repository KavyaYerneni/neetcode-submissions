class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        while(left < right){
            int mid = left +(right -left)/2;
            long long hours =0;
            for(int pile : piles){
                hours += pile/mid;
                if(pile % mid != 0){
                    hours++;
                }

            }
            if(hours > h){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return right;
    }
};
