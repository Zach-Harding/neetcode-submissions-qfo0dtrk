class KthLargest {
public:
    int k_val;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    KthLargest(int k, vector<int>& nums) {
        k_val = k;
        for (int n : nums) {
            minHeap.push(n);
            if (minHeap.size() > k_val) minHeap.pop();
        }
        
    }
    
    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > k_val) minHeap.pop(); 
        return minHeap.top();
    }
};
