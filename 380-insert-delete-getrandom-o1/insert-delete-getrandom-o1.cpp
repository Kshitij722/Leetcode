class RandomizedSet {
public:
vector<int> a;
unordered_map<int,int> b;

    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(b.find(val) != b.end()){
            return false;
        }    
        else{
            a.push_back(val);
            b[val] = a.size()-1;
            return true;
        }
    }

    
    bool remove(int val) {
        if(b.find(val) == b.end()){
            return false;
        }
        else{
            int end = a.back();
            a[b[val]] = a.back();
            a.pop_back();
            b[end] = b[val];
            b.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        return a[rand()%a.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */