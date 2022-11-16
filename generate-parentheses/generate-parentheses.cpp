class Solution {
    vector<string>res;
public:
    vector<string> generateParenthesis(int n) {
        if(!n)
            return {};
        int open = n, close = 0;
        Paranthesis("", open, close);
        return res;
    }
    
    void Paranthesis(string curr, int open, int close){
        if(open == 0 and close == 0){
            res.push_back(curr);
            return;
        }
        if(open > 0){
            Paranthesis(curr+'(', open-1, close+1); 
        }
        if(close > 0){
            Paranthesis(curr+')', open, close-1);
        }
    }
};

