class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int left_curr=1 , right_curr=1 , left_max=INT_MIN , right_max=INT_MIN ;
	    for(int i=0;i<n;i++){
	        left_curr*=nums[i];
	        right_curr*=nums[n-(i+1)];
	        left_max=max(left_max,left_curr);
	        right_max=max(right_max,right_curr);
	        if(nums[i]==0){
	            left_curr=1;
	        }
	        if(nums[n-(i+1)]==0){
	            right_curr=1;
	        }
	    }
	    return max(left_max,right_max);
    }
};







