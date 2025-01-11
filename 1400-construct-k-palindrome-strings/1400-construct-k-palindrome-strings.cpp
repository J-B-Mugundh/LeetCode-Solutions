class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() == k) return true;

        unordered_map<int, int> mp;
        for(char ch : s){
            mp[ch]++;
        }

        int oddCnt = 0, evenCnt = 0;

        for(auto [ch, freq] : mp){
            if(freq % 2){
                if(freq != 1)
                    evenCnt++;
                oddCnt++;
            }
            else
                evenCnt++;
        } 
        cout << "Odd count: " << oddCnt << endl;
        cout << "Even count: " << evenCnt << endl;

        return evenCnt >= k && oddCnt <= k || oddCnt + evenCnt == k || oddCnt == k;
    }
};