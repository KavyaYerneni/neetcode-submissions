class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>need(128,0);
        int n = s.size();
        int required = t.size();
        for(char c :t){
            need[c]++;
        }
        int left =0;
        int bestLen =INT_MAX, bestStart =0;
        for(int right =0; right <n; right++){
            if(need[s[right]] > 0) required--;
            need[s[right]]--;
            while(required == 0){
                int length = right-left+1;
                if(length< bestLen){
                    bestLen = length;
                    bestStart = left;
                }
                need[s[left]]++;
                if(need[s[left]] >0) required++;
                left++;
            }

        }
        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};
