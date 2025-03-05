class RandomizedSet {
    vector<int> vct;
    unordered_map<int, int> mp;
public:
    RandomizedSet() {
        vct.clear();
        mp.clear();
    }
    
    bool insert(int val) {
       if (mp.find(val) != mp.end()) {
        return false;
       }
       vct.push_back(val);
        mp[val] = vct.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end()) {
            return false;
        }
        if (vct.size() == 1) {
            vct.clear();
            mp.erase(val);
            return true;
        }
        int vct_index = mp[val];
        int last_val = vct.back();
        int last_val_index = mp[last_val];
        mp[last_val] = vct_index;
        mp.erase(val);
        vct.pop_back();
        vct[vct_index] = last_val;
        return true;
        
    }
    
    int getRandom() {
       return vct[rand() % vct.size()]; 
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */