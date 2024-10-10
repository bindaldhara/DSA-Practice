class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int prevDel=0,prevNotDel=arr[0],ans=arr[0];
        for(int i=1;i<arr.size();i++){
            prevDel=max(prevNotDel,prevDel+arr[i]);
            prevNotDel=max(prevNotDel+arr[i],arr[i]);
            ans=max(ans,max(prevDel,prevNotDel));
        }
        return ans;
    }
};