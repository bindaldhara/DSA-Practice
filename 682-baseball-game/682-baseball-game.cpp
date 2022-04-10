class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int> st;
        for(auto &z: ops) {
            if(z == "+") {
                int x = st.top(); 
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(z == "D") 
                st.push(st.top()*2);
            else if(z == "C") 
                st.pop();
            else st.push(stoi(z));
        }
        int s = 0;
        while(!st.empty()) {
            s+= st.top();
            st.pop();
        }
        return s; 
    }
};







