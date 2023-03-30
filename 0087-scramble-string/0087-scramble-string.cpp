class Solution {
public:
    map<string,bool>m;
bool solver(string s1,string s2){

    if(s1.size()==1) return s1==s2;
    if(s1==s2) return true;
    string val=s1+s2;
    if(m.find(val)!=m.end()) return m[val];
    int n=s1.size();
    for(int i=1;i<n;i++){
        bool con1=solver(s1.substr(0,i),s2.substr(0,i)) && solver(s1.substr(i),s2.substr(i));
        bool  con2=solver(s1.substr(0,i),s2.substr(n-i)) && solver(s1.substr(i),s2.substr(0,n-i));
         if(con1 || con2) return m[val]=true;
    }
   return  m[val]= false;
}
bool isScramble(string s1, string s2) {
    return solver(s1,s2);
        
    }
};