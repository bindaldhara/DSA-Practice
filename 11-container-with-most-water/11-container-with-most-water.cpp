class Solution {
public:
    int maxArea(vector<int>& height) {
       int beg = 0, end = height.size()-1;
        
        int low = 0;
        int area = 0; 
        int dist = 0; 
         
       while(beg < end) {
            low = min(height[beg], height[end]);
            dist = end - beg;
            
            area = max(area, dist * low);
            
            if(height[beg] < height[end])
                beg++;
            else
                end--;
        }
        
        return area; 
    }
};
