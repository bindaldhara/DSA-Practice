class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        for(int i=0;i<sentence.length();i++)
            st.insert(sentence[i]);
        if (st.size()>=26) return true;
        return false;
    }
};