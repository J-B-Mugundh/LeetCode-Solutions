class Solution {
public:
    int maxScore(string s) {
        int n = s.length() - 1;
        int ones = 0, zeros = 0, maxCnt = 0;
        for(int i = 0; i <= n; i++){
            if(s[i] == '1') ones++;
        }
        for(int i = 0; i < n; i++){
            if(s[i] != '1') zeros++;
            else ones--;
            maxCnt = max(maxCnt, zeros + ones);
        }
        return maxCnt;
    }
};