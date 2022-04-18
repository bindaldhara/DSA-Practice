class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
      unordered_map<int,int>mp;
        for(int i=0;i<tasks.size();i++)
            mp[tasks[i]]++;
        
        int ans=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            int key=itr->first;
            int val=itr->second;
            if(val==1) return -1;
            if(val==2) ans++;
            if(val==3) ans++;
            if(val>=4){
            int q=val/3;
            int rem=val-3*q;
            if(rem==0)
            {
                ans+=q;
            }
            if(rem==1)
            {
                ans+=(q-1+2);
            }
            if(rem==2)
            {
                ans+=(q+1);
            }
        }
            
        }
        return ans;  
    }
};

