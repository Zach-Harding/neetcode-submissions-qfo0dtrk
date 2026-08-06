class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        l = len(s)
        for idx in range(0,(l // 2)):
            low = s[idx]
            high = s[l-idx -1]
            temp = high
            s[idx] = high
            s[l-idx-1] = low

        