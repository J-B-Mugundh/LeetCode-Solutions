class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
        
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> dp(n, 0);

        if(isVowel(words[0][0]) && isVowel(words[0][words[0].size() - 1]))
            dp[0] = 1;
        
        for(int i = 1; i < n; i++) {
            int len = words[i].size();
            if(isVowel(words[i][0]) && isVowel(words[i][len - 1]))
                dp[i] = dp[i - 1] + 1;
            else
                dp[i] = dp[i - 1];
        }

        vector<int> ans;

        for(int i = 0; i < queries.size(); i++){
            if(queries[i][0] == 0)
                ans.push_back(dp[queries[i][1]]);
            else
                ans.push_back(dp[queries[i][1]] - dp[queries[i][0] - 1]); 
        }
        return ans; 
    }
};