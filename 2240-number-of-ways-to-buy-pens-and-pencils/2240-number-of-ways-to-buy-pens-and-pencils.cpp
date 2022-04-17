class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long int count=0;
        
        if(cost1>total && cost2>total)
            return 1;
        while(total>=0){
            count= count + total/cost2 +1;
            total = total -cost1;
        }
        return count;
    }
};