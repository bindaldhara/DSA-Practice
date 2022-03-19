class FreqStack {
public:
    priority_queue<vector<int>> pq;
    unordered_map<int,int> mp;
    int id=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        pq.push({mp[val],id++,val});
    }
    
    int pop() {
        auto tp=pq.top();
        pq.pop();
        mp[tp[2]]--;
        return tp[2];
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */