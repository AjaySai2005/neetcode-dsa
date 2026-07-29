class MyHashMap {
public:
    vector<pair<int ,int>> hashmap;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto& x:hashmap){
            if(x.first==key){
                x.second=value;
                return;
            }
            
        }
        hashmap.push_back({key,value});
    }
    
    int get(int key) {
        for(auto& x:hashmap){
            if(x.first==key){
                return x.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<hashmap.size();i++){
            if(hashmap[i].first==key){
                hashmap.erase(hashmap.begin()+i);
                return;
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