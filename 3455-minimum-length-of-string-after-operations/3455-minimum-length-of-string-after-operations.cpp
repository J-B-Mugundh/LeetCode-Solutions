class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;

        for(char ch : s)
            mp[ch]++;
        
        int cnt = 0;

        for(auto it : mp){
            if(it.second < 3)
                cnt += it.second;
            else if(it.second % 2)
                cnt += 1;
            else
                cnt += 2;
        }

        return cnt;
    }
};