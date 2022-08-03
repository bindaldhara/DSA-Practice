class MyCalendar {
public:
    vector<pair<int,int>>dbooks;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto b:dbooks){
            if(start<b.second && end> b.first)
                return false;
        }
              dbooks.push_back({start,end});
            return true;  
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */