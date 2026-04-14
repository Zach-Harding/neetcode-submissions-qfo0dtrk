class LRUCache {
public:
    int c = 0;
    unordered_map<int, int> lookup;
    list<int> keys;

    LRUCache(int capacity) {
        c = capacity;
    }
    
    int get(int key) {
        auto it = lookup.find(key);
        if (it == lookup.end()) {
            return -1;
        }

        keys.remove(key);
        keys.push_front(key);

        
        return it->second;
        
    }
    
    void put(int key, int value) {
        auto it = lookup.find(key);
        // if not in the hash
        if (it == lookup.end()) {
            // add to front of list
            keys.push_front(key);
            lookup.insert({key,value});
            // delete last item if above capacity
            while (keys.size() > c){
                int last_item = keys.back();
                keys.pop_back();
                lookup.erase(last_item);
            }
        } else {
            keys.remove(key);
            lookup[key] = value;
            keys.push_front(key);
            // leave hash unchanged
        }
    }
};
