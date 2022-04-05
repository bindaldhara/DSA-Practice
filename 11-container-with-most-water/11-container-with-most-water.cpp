class Solution {
public:
    int maxArea(vector<int>& height) {
       int begg = 0, end = height.size()-1;
        
        int low = 0;
        int area = 0; 
        int dist = 0; 
         
       while(begg < end) {
            low = min(height[begg], height[end]);
            dist = end - begg;
            
            area = max(area, dist * low);
            
            if(height[begg] < height[end])
                begg++;
            else
                end--;
        }
        
        return area; 
    }
};













