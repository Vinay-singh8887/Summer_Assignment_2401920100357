class Solution {
public:
    int strStr(string haystack, string needle) {

        if(needle.size()>haystack.size()) return -1;
        int  n = haystack.size();
        int j =  needle.size()-1;
         
         int i =0;
         while(j<n){ 
         if(haystack.substr(i,j-i+1) == needle) return i;

         i++;
         j++;
 
        }
        return -1;
        
    }
};