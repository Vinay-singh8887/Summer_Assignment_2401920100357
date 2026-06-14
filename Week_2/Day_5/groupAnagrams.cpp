<<<<<<< HEAD
class Solution {
public:

    unordered_map<string,vector<string>>mp;


    void group(string s){
        string temp =s;
        sort(temp.begin(),temp.end());
        mp[temp].push_back(s);
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    for(auto&str:strs)
     group(str);

      vector<vector<string>>ans;

     for(auto&[key,val]:mp)
       ans.push_back(val);

    return ans;
        
    }
};
=======
class Solution {
public:

    unordered_map<string,vector<string>>mp;


    void group(string s){
        string temp =s;
        sort(temp.begin(),temp.end());
        mp[temp].push_back(s);
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    for(auto&str:strs)
     group(str);

      vector<vector<string>>ans;

     for(auto&[key,val]:mp)
       ans.push_back(val);

    return ans;
        
    }
};
>>>>>>> c83cbd2 (Save changes)
