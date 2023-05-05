class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int start = 0;
        int end = 0;
        int ans = 0;  
        int temp = 0; 
        while(end < n){
            if(s[end]=='a' || s[end]=='e' ||s[end]=='i' || s[end]=='o' || s[end]=='u'){
               temp++;
           }
           if(end-start == k ){
               if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'){
                   temp--; 
               }
               start++;  
           }
           
           ans = max(ans, temp); 
           end++; 
        }
        return ans; 
    }
};