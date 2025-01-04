class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char, pair<int, int>> mp;
        
        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];
            if (mp.find(curr) == mp.end()) {
                mp[curr] = {i, i};
            } else {
                mp[curr].second = i;
            }
        }
        
        int ans = 0;
        
        for (auto& indices : mp) {
            int first = indices.second.first;
            int last = indices.second.second;
            
            if (first < last) {
                unordered_set<char> chars;
                for (int j = first + 1; j < last; j++) {
                    chars.insert(s[j]);
                }
                ans += chars.size();
            }
        }
        
        return ans;
    }
};
