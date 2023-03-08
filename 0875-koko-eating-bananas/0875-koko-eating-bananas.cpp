class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(begin(piles),end(piles));
       
        while(low<high){
          int mid = low+(high-low)/2;
          int ik=0;
          for(int p : piles){
            ik += (int)ceil((p * 1.0)/mid);
          }
          
          if(ik<=h)  
            high = mid;
          else
            low = mid+1;
  
        }
      
        return low;
    }
};