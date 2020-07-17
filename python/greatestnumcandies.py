"""
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
"""
def kidsWithCandies(candies, extraCandies):
    max = 0
    n = len(candies)
    ret = []
    for i in range(n):
        if candies[i] >= max:
            max = candies[i]
    for j in range(n):
        if candies[j] + extraCandies >= max:
            ret.append(True)
        else:
            ret.append(False)
    return ret


print(kidsWithCandies([12,1,12], 10))