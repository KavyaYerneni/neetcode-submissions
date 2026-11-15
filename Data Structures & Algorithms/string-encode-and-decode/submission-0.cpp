class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s : strs){
            encoded += to_string(s.size()) + '#' + s;
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string>ans;
        int n = s.size();
        int i=0;
        while(i<n){
            int j =i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            j++;
            ans.push_back(s.substr(j, length));
            i = j+ length;
        }
        return ans;

    }
};
