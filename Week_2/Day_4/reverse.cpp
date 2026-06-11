class Solution {
public:
    string reverseWords(string s) {
     int n = s.size();
     int i = 0;
     int j =0;

     while(j<n){

      if(s[j]!= ' ') j++;
      
      else{
      reverse(s.begin()+i,s.begin()+j);
      j+=1;
      i=j;
      }

     }

     reverse(s.begin()+i,s.begin()+j);


    return s;
    }
};