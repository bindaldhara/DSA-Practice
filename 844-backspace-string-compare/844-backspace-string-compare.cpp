class Solution {
public:
    bool backspaceCompare(string s, string t) {
          stack<char>s1,s2;
           for(auto i:s){ 
                if(i>='a'&&i<='z')s1.push(i);
              if(i=='#'&&s1.size()>0)s1.pop();
           }
           for(auto i:t){ 
            if(i>='a'&&i<='z')s2.push(i);
            if(i=='#'&&s2.size()>0)s2.pop();
           }
           return s1==s2; 
    }
};