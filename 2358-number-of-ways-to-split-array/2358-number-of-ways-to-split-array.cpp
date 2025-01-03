class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefix(n, 0);

        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        
        int cnt = 0;

        for(int i = 0; i < n - 1; i++) {
            if(2 * prefix[i] >= prefix[n - 1]) {
                cnt++;
            }
        }

        return cnt;
    }
};
