class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l =0;
        unordered_map<char,int>mp;
        int maxLen = 0;
        for(int r=0; r<n; r++){
            if(mp.find(s[r]) != mp.end() && mp[s[r]] >= l){ 
                l = mp[s[r]]+1;

            }
            mp[s[r]] = r;
            maxLen = max(maxLen, r-l+1);
        }
        return maxLen;
        
    }
};
