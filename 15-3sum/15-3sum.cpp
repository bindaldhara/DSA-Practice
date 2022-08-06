class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> >ans;
        sort(nums.begin(),nums.end());
        int n = (int) nums.size();
        for( int i=0 ; i < n ; i++ ){
            int a = nums[i];
            int left = i+1;
            int right = n-1;
            while(left<right and right>i and left<n ) {
                int sum = a + nums[left] + nums[right];
                if(sum==0) {
                    ans.push_back( { a,nums[left] , nums[right] } );
                    left++; 
                    right--; 
                    while(left < n and nums[left]==nums[left-1]) {
                        left++;
                    } 
                    while(right>i and nums[right]==nums[right+1]) {
                        right--;
                    }
                    
                }
                else if(sum>0) 
                    right--;
                    
                else 
                    left++;
            }
            
	            while(i+1<n and nums[i]==nums[i+1])
                    i++;
        }
        
        return ans;
    }
};