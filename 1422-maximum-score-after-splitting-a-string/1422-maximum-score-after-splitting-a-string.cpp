class Solution {
public:
    int maxScore(string s) {
        int left = 0, right = s.length() - 1;
        int maxCnt = 0;
        for(int i = left; i < right; i++){
            int cnt = 0;
            for(int j = left; j <= i; j++){
                if(s[j] == '0') cnt++;
            }
            for(int j = i + 1; j <= right; j++){
                if(s[j] == '1') cnt++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};