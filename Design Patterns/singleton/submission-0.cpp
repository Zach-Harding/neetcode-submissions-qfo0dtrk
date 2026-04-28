class Singleton {
private:

    static Singleton* ptr;
    string val;
    Singleton(): val("") {}
    

public:

    static Singleton *getInstance() {
        if(ptr) {
            return ptr;
        } else {
            ptr = new Singleton();
            return ptr;
        }
    }

    string getValue() {
        return val;
    }

    void setValue(string &value) {
        val = value;
    }
};

Singleton* Singleton::ptr = nullptr;