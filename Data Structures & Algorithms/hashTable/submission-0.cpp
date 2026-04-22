class HashTable {
public:
    int c = 0;
    std::unordered_map<int, int> hash;

    HashTable(int capacity) {
        c = capacity;
    }

    void insert(int key, int value) {
        hash[key] = value;
        if((this->getCapacity()*.5) <= this->getSize()) {
            this->resize();
        }
    }

    int get(int key) {
        auto it = hash.find(key);
        if(it == hash.end()) return -1;
        return it->second;
    }

    bool remove(int key) {
        auto it = hash.find(key);
        if(it == hash.end()) return false;
        hash.erase(key);
        return true;
    }

    int getSize() const {
        return hash.size();
    }

    int getCapacity() const {
        return c;
    }

    void resize() {
        c = c*2;
    }
};
