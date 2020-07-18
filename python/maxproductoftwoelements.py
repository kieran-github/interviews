"""
https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/
"""
import heapq
def maxProduct(self, nums: List[int]) -> int:
    if not nums:
        return 0
    elif len(nums) == 2:
        return (nums[0]-1)*(nums[1]-1)
    else:
        heapq.heapify(nums) 
        li = heapq.nlargest(2, nums)
        return (li[0]-1) * (li[1]-1)
    
