
class Solution {
public:
    bool is_possible(vector<int>&weight, int min_weight, int days){
        int day_req = 1, curr_weight = 0;
        for(int i=0;i<weight.size();++i){
            curr_weight = 0LL + curr_weight + weight[i];
            if(weight[i] > min_weight) return false;
            if(curr_weight > min_weight){
                day_req = day_req + 1;
                curr_weight = weight[i];
            }
        }

        return (day_req <= days);
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = accumulate(weights.begin(), weights.end(), 0);
        int res;
        while(low<=high){
            int mid = (low + high)/ 2;
            if(is_possible(weights, mid, days)){
                res = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        
        return res;
        
    }
};