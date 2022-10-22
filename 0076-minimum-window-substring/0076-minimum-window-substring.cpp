class Solution {
public:
    string minWindow(string s, string t) {
      vector<string> res;
      map<char,int> mp;
        for(auto i: t)
            mp[i]++;

        int i=0,j=0;
        int count=mp.size();
        int st=0;
        int mini=INT_MAX;

        while(j<s.size()){
            mp[s[j]]--;

            if(mp[s[j]]==0){
                count--;
            }

            if(count==0){
                while(count==0){
                   if((j-i+1)<mini){
                       mini=j-i+1;
                       st=i;
                   }

                   mp[s[i]]++;

                   if(mp[s[i]]>0){
                       count++;
                   }

                   i++;
                }
            }
            
            j++;
        }
        if(mini==INT_MAX){
            return "";
        }
        else{
            return s.substr(st,mini);
        }  
    }
};