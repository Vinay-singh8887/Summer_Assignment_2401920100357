class Solution {
public:
    int compress(vector<char>& chars) {

        int len = chars.size();
        if (len == 0 || len == 1)
            return len;

        int i = 0, j = 0;

        while (j < len) {
            char ch = chars[j];
            int count = 0;
            while (j < len && chars[j] == ch ) {
                count++;
                j++;
            }
            
            chars[i++] = ch;

            if(count>1){
            string temp = to_string(count); 

            for (auto& s : temp) 
                chars[i++] = s;
               
            }
        }
        return i;
    }
};