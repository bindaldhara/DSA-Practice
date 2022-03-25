class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
    int n=arr.size(), res=0;
    vector<int> presum(n+1,0);
    for(int i=0;i<n;i++)
        presum[i+1]=presum[i]+arr[i];
         res=presum[n];
    for(int len=3;len<=n;len+=2){
        for(int i=len;i<=n;i++)
            res+=(presum[i]-presum[i-len]); 
    }
    return res;
    }
};



