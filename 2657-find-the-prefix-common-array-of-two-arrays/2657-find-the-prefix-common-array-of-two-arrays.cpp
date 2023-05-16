class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> mpA, mpB;
        vector<int> res;
        int cnt = 0;
        for (int i = 0; i < A.size(); i++) {
            mpA[A[i]]++;
            mpB[B[i]]++;
            if (mpA[A[i]] && mpB[A[i]]) {
                cnt++;
                mpA[A[i]]--;
                mpB[A[i]]--;
            }
            if (mpA[B[i]] && mpB[B[i]]) {
                cnt++;
                mpA[B[i]]--;
                mpB[B[i]]--;
            }
            res.push_back(cnt);
        }
        return res;
    }
};