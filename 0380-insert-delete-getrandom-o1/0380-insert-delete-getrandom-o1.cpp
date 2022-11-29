class RandomizedSet {
public:
    unordered_map<int,int> mp;
    vector<int> arr; 

    bool insert(int val) {
        if(mp.count(val)) 
            return false;
        arr.push_back(val); 
        mp[val] = arr.size() - 1; 
        return true;
    }
    
    bool remove(int val) {
        if(!mp.count(val))
            return false;
        int last = arr.back();
        int rmIdx = mp[val];
        mp[last] = mp[val]; 
        arr[rmIdx] = last; 
        arr.pop_back(); 
        mp.erase(val); 
        return true;
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */