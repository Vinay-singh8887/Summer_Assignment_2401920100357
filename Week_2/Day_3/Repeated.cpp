class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0)
                continue;

            string key = s.substr(0, len);

            string New = "";

            while (New.size() < n)
                New += key;

            if (New == s)
                return true;
        }
        return false;
    }
};