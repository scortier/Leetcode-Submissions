class Solution:
    def isValidBST(self, root: TreeNode) -> bool:
        self.answer = True
        def helper(root, left, right):
            if(root):
                if(left >= root.val or root.val >= right):
                    self.answer = False
                    return
                helper(root.left, left, root.val)
                helper(root.right, root.val, right)
        helper(root, float("-inf"), float('inf'))
        return self.answer 