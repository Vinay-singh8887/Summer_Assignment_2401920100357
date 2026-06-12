class Solution {
public:
    bool checkpallin(string str, int i, int j) {

        while (i < j) {
            if (str[i] != str[j])
                return false;

            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {

        int len = s.size();

        if (len == 0 || len == 1)
            return s;

        string ans = "";

        for (int i = 0; i < len; i++) {
            for (int j = len - 1; j >= 0; j--) {
                if (ans.size() > j - i + 1)
                    break;

                if (s[i] == s[j] && checkpallin(s, i, j)) {
                    ans = s.substr(i, j - i + 1);
                    break;
                }
            }
        }

        return ans;
    }
};