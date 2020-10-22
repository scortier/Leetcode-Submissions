class Solution:
    def minDepth(self, root: TreeNode) -> int:
        def depthfind(root,depth,mini):
            if root==None:
                return mini
            mini=depthfind(root.left,depth+1,mini)
            if (root.left==None and root.right==None):
                mini=min(mini,depth)
            mini=depthfind(root.right,depth+1,mini)
            return mini
        if root==None:
            return 0
        mini=10000
        mini=depthfind(root,1,mini)
        return mini