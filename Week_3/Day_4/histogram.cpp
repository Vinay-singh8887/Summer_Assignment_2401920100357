class Solution {
public:
    
    vector<int> getNSR(vector<int>& heights){
        int n = heights.size();
        stack<int>st;
         vector<int>NSR(n);

        for(int i = n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();

            if(st.empty()) NSR[i] = n;

            else  NSR[i] = st.top();

            st.push(i);
                
             
        }
        return NSR;
    }

    vector<int> getNSL(vector<int>& heights){
        int n = heights.size();
        stack<int>st;
         vector<int>NSL(n);

        for(int i = 0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();

            if(st.empty()) NSL[i] = -1;

            else  NSL[i] = st.top();

            st.push(i);
             
        }
        return NSL;
    }
 
   
    int largestRectangleArea(vector<int>& heights) {

        vector<int>left =  getNSL(heights);
        vector<int>right = getNSR(heights);

        int maxarea = 0;
        int n = heights.size();

        for( int i =0;i<n;i++){
           
           int area = heights[i]*(right[i]-left[i]-1);

           maxarea = max(area,maxarea);
        }
        return maxarea;
    }
};