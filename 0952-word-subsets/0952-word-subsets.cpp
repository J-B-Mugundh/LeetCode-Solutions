class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        
        unordered_map<char, int> maxFreq;
        for (string word : words2) {
            unordered_map<char, int> freq;
            for (char ch : word) {
                freq[ch]++;
            }
            for (auto [ch, count] : freq) {
                maxFreq[ch] = max(maxFreq[ch], count);
            }
        }
        
        for (string word : words1) {
            unordered_map<char, int> freq;
            for (char ch : word) {
                freq[ch]++;
            }
            
            bool isUniversal = true;
            for (const auto& [ch, count] : maxFreq) {
                if (freq[ch] < count) {
                    isUniversal = false;
                    break;
                }
            }
            
            if (isUniversal) {
                ans.push_back(word);
            }
        }
        
        return ans;
    }
};
