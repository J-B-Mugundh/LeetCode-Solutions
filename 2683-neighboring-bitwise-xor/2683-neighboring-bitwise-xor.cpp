class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int x = 0;
        for (auto e : derived) {
            x = x ^ e;
        }
        return x == 0;
    }
};