"""
https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
"""
def numberOfSteps(num):
    steps = 0
    while num != 0:
        if num % 2 == 0:
            num //= 2
        else:
            num -= 1
        steps += 1
    return steps


print(numberOfSteps(123))