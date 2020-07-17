"""
https://leetcode.com/problems/running-sum-of-1d-array/
"""
def runningSum(nums):
    ret = [0] * len(nums) 
    acc = 0
    for i in range(0, len(nums)):
        acc += nums[i]
        ret[i] = acc
    return ret


print(runningSum([3,1,2,10,1]))