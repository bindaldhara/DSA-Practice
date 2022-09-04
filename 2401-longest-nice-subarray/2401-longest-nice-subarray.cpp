class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
      int res=0;
	  int j=0,mx=0;
        int n=nums.size();
		for(int i=0;i<n;i++) {
			while((res&nums[i])>0) {
				res=res^nums[j++];
			}
			mx=max(mx,i-j+1);
			res|=nums[i];
		}
		return mx;  
    }
};