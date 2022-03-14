class Solution {
public:
    string simplifyPath(string path) {
        int sz = path.size();
        
        stack<string> st;
        
        for(int i=0; i<sz; i++){
            string temp;   
            
            if(path[i] == '/') 
                continue;
            while(i<sz && path[i] != '/')  
                temp += path[i++];
            
            if(temp == ".."){
                if(!st.empty()) 
                    st.pop();
            }   
               
            else if(temp == ".") 
                continue;
             
            else
                st.push(temp);
        }
        
        string res;
        while(!st.empty()){
            res = '/' + st.top() + res;
            st.pop();
        }
        
        if(res == "") 
            return "/";
        return res;
    }
};