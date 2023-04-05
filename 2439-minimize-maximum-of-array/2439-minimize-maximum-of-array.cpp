class Solution {
public:
    int minimizeArrayValue(vector<int>& a) {
        
    long long int  sum=0,n=a.size();
    long long int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      if(sum%(i+1)==0){ans=max(ans,sum/(i+1));}
      else{ans=max(ans, 1 +sum/(i+1));}
    }
return ans;
    }
};