class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
    map<int,int>mp;
    int m=nums2.size();
   mp[nums2[m-1]]=-1;
    st.push(nums2[m-1]);
    for(int i=m-2;i>=0;i--){
        while(!st.empty() && st.top()<nums2[i])
            st.pop();
        if(st.empty())
            mp[nums2[i]]=-1;
        else
            mp[nums2[i]]=st.top();
        st.push(nums2[i]);
    }
    vector<int>res;
    int n=nums1.size();
    for(int i=0;i<n;i++)
        res.push_back(mp[nums1[i]]);
    return res;
    }
};

