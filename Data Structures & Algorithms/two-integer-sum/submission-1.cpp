class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int, int> numbers;
       int i = 0;
       for(int n: nums) {
        numbers[n] = i;
        i += 1;
       }
       
       int j = 0;
       for(int n : nums) {
        int difference = target - n;
        auto found = numbers.find(difference);
        if (found != numbers.end() & (j != found->second)) {
            return {j, found->second};
        }


        j += 1;
       }
    }
};
