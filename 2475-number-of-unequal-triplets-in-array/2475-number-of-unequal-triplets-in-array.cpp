class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size(), cnt = 0 ;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            for(int j =i+1;j<n;j++){
                st.insert(nums[j]);
                if(st.size()==2){
                    for(int k = j+1;k<n;k++){
                    st.insert(nums[k]);
                    if(st.size() == 3) {
                        cnt++;st.erase(nums[k]);}
                }
            }
                if(st.size()==2) 
                    st.erase(nums[j]);
            }
            if(st.size() == 1)
                st.erase(nums[i]);
        }
        
        return cnt;
    }
};