class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> numMap;
        for(int n : nums) {
            if(numMap.find(n) == numMap.end()) {
                numMap[n] = 1;
            } else {
                numMap[n] += 1;
                return true;
            }
        }
        return false;

    }
};