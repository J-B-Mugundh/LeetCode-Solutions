class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;
        if(nums2.size() % 2){
            for(int n : nums1){
                xor1 ^= n;
            }
        }
        if(nums1.size() % 2){
            for(int n : nums2){
                xor2 ^= n;
            }
        }
        return xor1 ^ xor2;
    }
};