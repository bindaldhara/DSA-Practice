class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>check;
    unordered_map<string,pair<int,int>>p;
    UndergroundSystem() {}
    void checkIn(int id, string sn, int t) {
        check[id]={sn,t};
    }
    
    void checkOut(int id, string sn, int t) {
        auto ch=check[id];
        check.erase(id);
        string pn=ch.first+"_"+sn;
        p[pn].first+=t-ch.second;
        p[pn].second+=1;
    }
    
    double getAverageTime(string ss, string es) {
        string rn=ss+"_"+es;
        auto r=p[rn];
        return (double)r.first/r.second;
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */

