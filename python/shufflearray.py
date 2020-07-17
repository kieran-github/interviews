"""
https://leetcode.com/problems/shuffle-the-array/
"""
#inefficient
def shuffle(nums, n):
    p1 = 0
    p2 = n
    ret = []
    for _ in range(n):
        ret.append(nums[p1])
        ret.append(nums[p2])
        p1 += 1
        p2 += 1
    return ret        

print(shuffle([2,5,1,3,4,7], 3))