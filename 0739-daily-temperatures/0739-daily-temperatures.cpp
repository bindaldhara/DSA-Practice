class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>res(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() and temperatures[i]>=temperatures[st.top()]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i);
                }else{
                    res[i]=st.top()-i;
                    st.push(i);
                }
            }
        }
        return res;
    }
};
