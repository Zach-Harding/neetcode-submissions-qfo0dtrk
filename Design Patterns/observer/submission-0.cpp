class Observer {
public:
    virtual void notify(string& itemName) = 0;
};

class Customer : public Observer {
private:
    string name;
    int notifications;

public:
    Customer(string& name) : name(name), notifications(0) {}

    void notify(string& itemName) override {
        notifications += 1;
    }

    int countNotifications() {
        return notifications;
    }
};

class OnlineStoreItem {
private:
    string itemName;
    int stock;
    std::unordered_map<Observer*, int> subs;

public:
    OnlineStoreItem(string& itemName, int stock) : itemName(itemName), stock(stock) {}

    void subscribe(Observer* observer) {
        subs[observer] = 0;
    }

    void unsubscribe(Observer* observer) {
        subs.erase(observer);
    }

    void updateStock(int newStock) {
        int oldstock = this->stock;
        this->stock = newStock;
        if((this->stock > 0) && (!oldstock)) {
            for(auto& sub: this->subs) {
                sub.first->notify(itemName);
            } 
        }
    }
};
