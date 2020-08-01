#https://leetcode.com/problems/n-ary-tree-preorder-traversal/submissions/
"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        ret = []
        def preordern(root):
            if root:
                ret.append(root.val)
                for r in root.children:
                    preordern(r)
        preordern(root)
        return ret
