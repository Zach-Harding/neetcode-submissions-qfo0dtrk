class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> maxHeap(stones.begin(), stones.end());
        while(maxHeap.size() > 1){
            int h = maxHeap.top();
            maxHeap.pop();
            int nh = maxHeap.top();
            maxHeap.pop();
            if(maxHeap.empty() & (h == nh)) {
                return 0;
            } else if (maxHeap.empty()) {
                return h-nh;
            }
            maxHeap.push((h-nh));
        }
        return maxHeap.top();
    }
};
