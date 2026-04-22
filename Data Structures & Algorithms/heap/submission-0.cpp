class MinHeap {
public:
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    MinHeap() {}

    void push(int val) {
        minHeap.push(val);
    }

    int pop() {
        if (minHeap.empty()) return -1;
        int top = minHeap.top();
        minHeap.pop();
        return top;
    }

    int top() {
        if (minHeap.empty()) return -1;
        int top = minHeap.top();
        return top;
    }

    void heapify(const vector<int>& arr) {
        minHeap = std::priority_queue<int, std::vector<int>, std::greater<int>> (arr.begin(), arr.end());
    }
};
