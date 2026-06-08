class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if(magazine.size()<ransomNote.size()) return false;

        unordered_map<char,int>mp;

        for(char ch:ransomNote)
         mp[ch]++;

         for(char ch:magazine){
            if(mp.find(ch)!=mp.end())
              mp[ch]--;
         }


         for(auto[key,val]:mp){
            if(val>0) return false;
         }

    return true;

        
    }
};
