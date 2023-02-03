class Solution {
public:
    string convert(string s, int numRows) {
        string res="";
        if(numRows==1) 
            return s;
        for(int r=0;r<numRows;r++){
            int inc= 2*(numRows - 1);
            for(int i=r;i<s.size();i+=inc){
                res.push_back(s[i]);
                if(r>0 && r<numRows-1 && i+inc -2*r <s.size() ){
                    res.push_back(s[i+inc -2*r]);
                }
                    
            }
        }
        return res;
    }
};