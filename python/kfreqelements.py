#https://leetcode.com/problems/top-k-frequent-elements/submissions/
from collections import defaultdict
import heapq 

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counted = defaultdict(int)
        for n in nums:
            counted[n] += 1
        k_largest = heapq.nlargest(k, list(counted.values()))
        ret = []
        for k,v in counted.items():
            if v in k_largest:
                ret.append(k)
        return ret

