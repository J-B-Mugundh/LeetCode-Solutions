class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        int cnt = 0;

        vector<int> prefix(n), freq(n + 1, 0); // n + 1 => since 1 <= A[i], B[i] <= n

        for(int i = 0; i < n; i++){
            if(++freq[A[i]] == 2) cnt++;

            if(++freq[B[i]] == 2) cnt++;

            prefix[i] = cnt;
        }

        return prefix;

    }
};