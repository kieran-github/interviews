"""
https://leetcode.com/problems/reverse-words-in-a-string-iii/
"""
class Solution:
    def reverseWords(self, s: str) -> str:
        buffer = s.split()
        def helperReverse(string):
            return string[::-1]
        for i, word in enumerate(buffer):
            buffer[i] = helperReverse(word)

        return " ".join(buffer)
