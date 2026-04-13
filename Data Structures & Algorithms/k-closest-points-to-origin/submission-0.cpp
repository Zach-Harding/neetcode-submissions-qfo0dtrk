class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::priority_queue<pair<double, vector<int>>> maxHeap;
        for(vector<int> x: points){
            double distance = pow(x[0], 2) + pow(x[1], 2);
            maxHeap.push({distance, x});
            if (maxHeap.size()>k) {
                maxHeap.pop();
            }
        }

        vector<vector<int>> pts;

        while (!maxHeap.empty()){
            pts.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return pts;

    }
    
};
