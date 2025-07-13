class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out = "";
        int n = strs.size(), j = 0;

        while (true) {
            for (int i = 0; i < n; i++) {
                if (j >= strs[i].size()) return out;
                if (i != n - 1 && strs[i][j] != strs[i + 1][j]) return out;
            }
            out += strs[0][j];
            j++;
        }

        return out;
    }
};