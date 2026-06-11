class Solution {
public:
    string decodeString(string s) {
        int len = s.size();
        stack<char>st;

        for(int i = 0;i<len;i++){
            
            if(s[i]!=']') st.push(s[i]);

            else{
                string temp = "";

                while(!st.empty() && st.top()!='['){
                   temp = string(1,st.top())+temp;
                    st.pop();
                }
                st.pop();

                string num = "";

                while(!st.empty() && isdigit(st.top())){
                    num = string(1,st.top())+num;
                    st.pop();
                }
                
                int k = num.empty()?1:stoi(num);
                
                string decoded = "";
                for(int i =0;i<k;i++)
                    decoded+=temp;
                

               for(char ch:decoded)
                st.push(ch);

               
            }

        }

      string ans ="";
      while(!st.empty()){
        ans=st.top()+ans;
        st.pop();
      }
     
     return ans;
        
    }
};