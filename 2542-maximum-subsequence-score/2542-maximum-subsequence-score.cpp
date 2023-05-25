class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
      vector<vector<int>> v;

      for(int i=0;i<n;i++){
          v.push_back({nums2[i],nums1[i]});
      }    
      sort(v.rbegin(),v.rend());
  int j;
  long long sum=0;
  priority_queue <int, vector<int>, greater<int>> pq;
      for( j=0;j<k;j++){
          pq.push(v[j][1]);
          sum+=v[j][1];
         
      }
    
      long long ans=v[j-1][0]*sum;
      for(;j<n;j++){
          sum=sum-pq.top()+v[j][1];
          pq.pop();
          ans=max(ans,v[j][0]*sum);
          pq.push(v[j][1]);
      }
      return ans;
    }
};