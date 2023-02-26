class MyHashMap {
public:
  vector<vector<int>> v;
    int size=0;
    
    MyHashMap() 
    {
        
    }
    
    void put(int key, int value){
        for(int i=0;i<size;i++){
            if(v[i][0]==key){
                v[i][1]=value;
                return;
            }
        }
        v.push_back({key,value});
        size++;
    }
    
    int get(int key) {
        for(int i=0;i<size;i++)
            if(v[i][0]==key)
                return v[i][1];
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<size;i++){
            if(v[i][0]==key){
                v.erase(v.begin()+i);
                size--;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */