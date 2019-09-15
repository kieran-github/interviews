"""
https://leetcode.com/problems/backspace-string-compare/submissions/

"""

class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:       
        def helper(string):
            stack = []
            for char in string:
                if char != '#':
                    stack.append(char)
                elif stack:
                    stack.pop()
            
            return ''.join(stack)
        
        return helper(S) == helper(T)
