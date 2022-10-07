class MyCalendarThree {
public:
    map<int,int>mp;
    int maxm=INT_MIN;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int sum=0;
        for(auto it:mp){
            sum+=it.second;
            maxm=max(maxm,sum);
        }
        return maxm;
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */