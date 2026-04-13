class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sone = {};
        std::unordered_map<char, int> stwo = {};
        for (char a : s) {
            sone[a] += 1;
        }
        for (char a : t) {
            stwo[a] += 1;
        }

        return (sone == stwo);
    }
};
