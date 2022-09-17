class Solution {
public:
   bool isPalindrome(string S){
        string P = S;
        reverse(P.begin(), P.end());
        return S==P;
    }
    
    vector<vector<int>> palindromePairs(vector<string>& words) {
        unordered_map<string,int> map;
        int n = words.size();
        vector<vector<int>> ans;
        string temp,s,temp2;
        int r,l;
        
        for(int i=0 ; i<n ; i++)
            map[words[i]] = i;
        
        for(int i=0 ; i<n ; i++) {
            s = words[i];
            l = s.length();
            temp = words[i];
            
            reverse(temp.begin(),temp.end());
            if(map.find(temp) != map.end() && map[temp] != i) {
                ans.push_back({i,map[temp]});
            }
            
            if(map.find("") != map.end() && isPalindrome(s) && map[""] != i) {
                ans.push_back({map[""] , i});
                ans.push_back({i,map[""]});
            }
            
            temp = "";
            r = s.length()-1;
            while(r >= 1) {
                temp += s[r];
                if(map.find(temp) != map.end() && isPalindrome(s.substr(0,r)) && map[temp] != i)
                    ans.push_back({map[temp] , i});
                r--;
            }
            temp = "";
            r = 0;
            while(r < l-1) {
                temp += s[r];
                temp2 = temp;
                reverse(temp2.begin(),temp2.end());
                if(map.find(temp2) != map.end() && isPalindrome(s.substr(r+1,l-1-r)) && map[temp2] != i)
                    ans.push_back({i,map[temp2]});
                r++;
            }
        }
        
        return ans;
        
    }
};