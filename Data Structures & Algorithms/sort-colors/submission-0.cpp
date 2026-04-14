class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3, 0);
        vector<int> final = {};
        for(int n:nums) {
            count[n] += 1;
        }

        for(int idx = 0; idx < count.size(); idx++) {
            for(int i = 0; i < count[idx];i++) {
                final.push_back(idx);
            }
        }
        nums = final;
    }
};