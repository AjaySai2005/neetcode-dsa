class MyHashSet {
public:
    vector<int> hashset;
    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int x:hashset){
            if(key==x) return;
        }
        hashset.push_back(key);

    }
    
    void remove(int key) {
        for(int i=0;i<hashset.size();i++){
            if(key==hashset[i]){
                hashset.erase(hashset.begin()+i);
                return;
            }
        }
        
    }
    
    bool contains(int key) {
        for(int x:hashset){
            if(key == x){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */