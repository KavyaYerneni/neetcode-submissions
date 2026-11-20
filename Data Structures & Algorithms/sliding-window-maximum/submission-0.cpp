class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int r=0; r<n;r++){
            pq.push({nums[r],r});
            int left = r-k+1;
            while(!pq.empty() && pq.top().second < left){
                pq.pop();
            }
            if(r >= k-1){
                ans.push_back(pq.top(). first);
            }

        }
        return ans;
        
    }
};
