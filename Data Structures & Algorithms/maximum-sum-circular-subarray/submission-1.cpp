class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = -999;
        int currSum = 0;
        int currminSum = 0;
        int minSum = 0;
        int totalSum = 0;

        for (int n: nums){
            totalSum += n;
            currSum = max(n, currSum + n);
            maxSum = max(maxSum, currSum);
            
            currminSum = min(n, currminSum + n);
            minSum = min(minSum, currminSum);
        }

        if (maxSum < 0) return maxSum;
        maxSum = max(maxSum, totalSum - minSum);
        return maxSum;
    }
};