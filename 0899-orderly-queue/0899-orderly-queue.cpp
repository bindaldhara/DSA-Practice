class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        string temp;
      if(k==1){
            string prev=s;
            string res=s;
            for(int i=0;i<n;i++){
                temp=s.substr(i,n-i+1)+s.substr(0,i);
                if(temp<prev){
                    res=temp;
                    prev=temp;
                }
            }
            return res;
        }
       sort(s.begin(),s.end());
         return s;  
    }
};

