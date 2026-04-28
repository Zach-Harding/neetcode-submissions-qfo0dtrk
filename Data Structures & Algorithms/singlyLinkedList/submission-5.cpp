class Node {
public:
    int val;
    Node* next;

    Node() : val(0), next(nullptr) {}
    Node(int val, Node* next = nullptr) : val(val), next(next) {}
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        Node* n = head;
        int i = 0;
        while(n && i < index) {
            n = n->next;
            i++;
        }
        if (n && i == index) return n->val;
        return -1;
    }

    void insertHead(int val) {
        Node* nh = new Node(val, head);
        head = nh;
        if(!tail) tail = head;
    }
    
    void insertTail(int val) {
        Node* nt = new Node(val, nullptr);
        if(!head) {
            head = nt;
            tail = nt;
            return;
        }

        tail->next = nt;
        tail = nt;
    }

    bool remove(int index) {
        if (!head) return false;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            if (!head) tail = nullptr;
            delete temp;
            return true;
        }
        int i = 0;
        Node* n = head;
        while(n && i < index - 1) {
            n = n->next;
            i++;
        }
        if (n && n->next){
            Node* toDelete = n->next;
            n->next = n->next->next;
            if (!n->next) tail = n;
            delete toDelete;
            return true;
        }
        return false;
    }

    vector<int> getValues() {
        vector<int> vals;
        Node* n = head;
        while(n) {
            vals.push_back(n->val);
            n = n->next;
        }
        return vals;
    }
};
