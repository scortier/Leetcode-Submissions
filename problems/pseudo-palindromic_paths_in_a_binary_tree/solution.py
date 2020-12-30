# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
        def dfs(root):
            arr[root.val - 1] = not arr[root.val - 1]
            if not(root.left or root.right):
                if arr.count(False) <= 1:
                    self.res += 1
                    arr[root.val - 1] = not arr[root.val - 1]
                    return

            if root.left:
                dfs(root.left)
            if root.right:
                dfs(root.right)
            arr[root.val - 1] = not arr[root.val - 1]

        self.res = 0
        arr = [True] * 9
        dfs(root)
        return self.res