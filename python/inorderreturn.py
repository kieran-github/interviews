"""
https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/
"""

class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

def inorderTraversal(root):
    buffer = []
    def helper(root):
        if not root:
            return [0]
        if root: 
			buffer.append(root.val)
        if root.left: 
			buffer.append(root.left.val)
        if root.right:
			 buffer.append(root.right.val)
    return helper(root)


node = TreeNode(1)
node.left = None
node.right = TreeNode(2)
node.right.left = TreeNode(3)
print(inorderTraversal(node))