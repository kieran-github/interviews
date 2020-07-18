#https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/
def findNumbers(nums):
    evens = 0 
    for i in nums:
        count = 0
        while i > 0:
            i //= 10
            count += 1
        if count % 2 == 0: evens += 1
    return evens
print(findNumbers([12,345,2,6,7896]))

