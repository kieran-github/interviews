#https://leetcode.com/problems/n-ary-tree-postorder-traversal/submissions/
"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        ret = []
        def postordern(root):
            if root:
                for r in root.children:
                    postordern(r)
                ret.append(root.val)
                
        postordern(root)
        return ret
