class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int len = temperatures.size();
        stack<int>st;
        vector<int> ans(len); 

        for(int i = len-1;i>=0;i--){

            while(!st.empty() && temperatures[st.top()]<=temperatures[i])  
                st.pop(); 

            if(st.empty())  ans [i] = 0;
               
            else ans[i] = st.top()-i; 

         st.push(i);
        }

        return ans; 
 
    }
};