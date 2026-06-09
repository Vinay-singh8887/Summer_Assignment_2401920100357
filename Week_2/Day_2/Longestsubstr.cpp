class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0||n==1) return n;
        unordered_set<char>st;

        int i = 0;
        int j = 0;
        int maxlen = 0;
         

        while (j < n) {

            while(st.count(s[j])){
               
                st.erase(s[i]);
                i++;
            }
              { 
                st.insert(s[j]);
                maxlen = max(maxlen, j - i+1);
                j++;
            }
        }

        return maxlen;
    }
};