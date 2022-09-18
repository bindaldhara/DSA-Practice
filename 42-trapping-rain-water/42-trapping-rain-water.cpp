class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
        vector<int> left(n) , right(n);

        for(int i=1;i<n;i++)
            left[i] = max(height[i-1],left[i-1]);
        for(int i=n-2;i>=0;i--)
            right[i] = max(height[i+1],right[i+1]);
        
        int res = 0;
        for(int i=0;i<n;i++){
            int waterLevel = min(left[i],right[i]);
            if(waterLevel>=height[i])
                res = res+waterLevel-height[i];
        }
        return res;  
    }
};















