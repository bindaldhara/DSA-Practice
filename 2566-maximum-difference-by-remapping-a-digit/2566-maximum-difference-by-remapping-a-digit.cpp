class Solution {
public:
    int minMaxDifference(int num) {
        string s1=to_string(num);
        string s2=to_string(num);
        char minm=s1[0],maxm=s1[0];
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='9'){
                maxm=s1[i];
                break;
            }
        }
        
        string smax="",smin="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]==maxm)
                s1[i]='9';
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]==minm)
                s2[i]='0';
        }
        int smx=stoi(s1);
        int smn=stoi(s2);
        return smx-smn; 
    }
};