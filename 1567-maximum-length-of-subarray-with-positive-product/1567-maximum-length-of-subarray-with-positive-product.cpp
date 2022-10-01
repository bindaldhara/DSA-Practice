class Solution {
public:
    int getMaxLen(vector<int>& nums) {
          int pos_sum=0, neg_sum=0, res=0, n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]==0){
                pos_sum=0, neg_sum=0;
                continue;
            }
            else if(nums[i]>0){
                if(pos_sum==0) 
                    pos_sum=1;
                else pos_sum++;
                if(neg_sum>0) 
                    neg_sum++;
            }
            else{
                int pg=0, ng=1;
                if(pos_sum>0) ng=pos_sum+1;
                if(neg_sum>0) pg=neg_sum+1;
                pos_sum=pg, neg_sum=ng;
            }
            res=max(res,pos_sum);
        }
        return res;
    }
};