"""
https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
"""

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        # buffer = set(nums)
        # compare = set([n for n in range(1, len(nums)+1)])
        return list(set([n for n in range(1, len(nums)+1)]) - set(nums))
        