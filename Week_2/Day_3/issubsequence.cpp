class Solution {
public:
    bool isSubsequence(string s, string t) {

        if (s.size() > t.size())
            return false;

        if(s.size()==0) return true;    

        int i = 0, j = 0;

        int n = t.size();
        int m = s.size();

        while (j < n) {

            if (t[j] == s[i]){
                i++;
                  if (i == m )
                return true;
            }
            j++;
        }
        return false;
    }
};