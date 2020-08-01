#https://leetcode.com/problems/binary-search/
class Solution:
    def search(self, nums, target):
        l = 0
        r = len(nums) -1

        while l <= r:
            m = l + (r-l) // 2
            if nums[m] == target:
                return m
            elif nums[m] > target:
                r = m - 1
            else:
                l = m + 1
        #not found?
        return -1

print(Solution().search([-1,0,3,5,9,12], 13))        


