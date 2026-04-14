class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = -999;
        int currSum = 0;

        for(int n : nums) {
            currSum = max(0, currSum);
            currSum += n;
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};
