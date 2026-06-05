class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();

        string common = strs[0];

        for (int i = 1; i < n; i++) {
            int size = min(common.size(), strs[i].size());
            for (int j = 0; j < size; j++) {

                if (common[j] != strs[i][j]){
                    common = common.substr(0, j);
                    break;
                }
            }

            if(common.size()>size)
            common = common.substr(0,size);

        }
        return common;
    }
};