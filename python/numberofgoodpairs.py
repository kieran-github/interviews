"""
https://leetcode.com/problems/number-of-good-pairs/
"""
def numIdenticalPairs(nums):
    ret = 0
    length = len(nums)
    for i in range(0, length-1):
        for j in range(i+1, length):
            if nums[i] == nums[j]:
                ret += 1
    return ret



print(numIdenticalPairs([1,1,1,1]))