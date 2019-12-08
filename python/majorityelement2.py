from collections import defaultdict
"""
https://leetcode.com/problems/majority-element-ii/submissions/
"""
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        ret = []
        counted = defaultdict(int)
        for i in nums:
            counted[i] += 1
            
        for key, value in counted.items():
            if counted[key] > len(nums) // 3:
                ret.append(key)
                
        return ret
        