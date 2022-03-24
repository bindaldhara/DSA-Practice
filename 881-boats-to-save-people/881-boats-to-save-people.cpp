class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0;
        int i=0,j=people.size()-1;
        sort(people.begin(),people.end());
        while(i<=j){
            if(people[i]+people[j]<=limit){
                cnt++;
                i++;
                j--;
            }
            else{
                cnt++;
                j--;
            }
        }
        return cnt;
    }
};