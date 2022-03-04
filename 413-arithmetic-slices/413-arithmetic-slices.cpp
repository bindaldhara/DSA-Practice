class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        
        
        int total=0;
        int i=0,j=2;
		
        while(i<n-2 && j<n)
        {
		
            if(nums[i+1]-nums[i]==nums[j]-nums[j-1])
                j++;
            
            
            else
            {
			
                total+=((j-i-2)*(j-i-2+1))/2;
                i=j-1;
                j+=1;
            }
        }
        
        if(j==n)
        {
            total+=((j-i-2)*(j-i-2+1))/2;
        }
        
        return total;
    }
};