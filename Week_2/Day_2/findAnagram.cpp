class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

         vector<int>ans;
       
        int n = p.size();
        int m = s.size();
 

        vector<int> freq1(26, 0), freq2(26, 0);

        for (auto ch : p)
            freq1[ch - 'a']++;

        int i = 0;
        int j = 0;
        while (j < m) {
            freq2[s[j] - 'a']++;

            if (j - i + 1 > n) {
                freq2[s[i] - 'a']--;
                i++;
            }
            if (freq1 == freq2)
                ans.push_back(i);

            j++;
        }
        return ans;;


    }
};