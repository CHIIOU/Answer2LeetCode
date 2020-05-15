class Solution4(object):

    def lengthOfLongestSubstring(self, s: str) -> int:
        if not s:
            return 0
        max_length = 0      
        left, right = 0, 0  
        for i, c in enumerate(s):
            if c not in s[left:right]:
                right += 1
            else:
                left += s[left:right].index(c) + 1
                right += 1
            max_length = max(right - left, max_length)
        return max_length if max_length != 0 else len(s)
