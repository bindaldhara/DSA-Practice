class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        priority_queue<int>pq;
        long long sum=0;
        for(int i=0;i<n;i++)
            pq.push(gifts[i]);
        
        while(k--){
            int temp=pq.top();
            temp=floor(sqrt(temp));
            pq.pop();
            if(temp>0)
            pq.push(temp);
        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};