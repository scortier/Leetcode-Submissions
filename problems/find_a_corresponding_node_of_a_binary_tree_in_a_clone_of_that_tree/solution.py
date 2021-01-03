# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def traverse(self, node, clone):
        if not node:
            return
        if not self.answer:
            if node is self.target:
                self.answer = clone
            self.traverse(node.right, clone.right)
            self.traverse(node.left, clone.left)

    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        self.target = target
        self.answer = None
        self.traverse(original, cloned)
        return self.answer