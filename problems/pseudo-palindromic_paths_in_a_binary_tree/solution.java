public class Solution {
    
    // new pubclily integr 
    
    public int pseudoPalindromicPaths (TreeNode root) {
        
        // returning value 
        
        return validPath(root, new HashSet<>());
    }
    
    // new private class 
    

    private int validPath(TreeNode node, HashSet<Integer> prev) {
        
        // null pointer 
        
        
        assert node != null;
        
        // if loop
        
        HashSet<Integer> next = new HashSet<>(prev);
        
        // if else looping 
        
        if (next.contains(node.val)) {
            next.remove(node.val);
        }
        // else looping 
        
        else {
            next.add(node.val);
        }
        
        // if looping 
        

        if (node.left == null && node.right == null) {
            
            // if loops
            
            if (next.isEmpty() || next.size() == 1) {
                return 1;
            }
            
            // else looping 
            
            else {
                return 0;
            }
        }
        // new integer 
        
        int res = 0;
        
        // if looping 
        
        if (node.left != null) {
            res += validPath(node.left, next);
        }
        
        // if looping 
        
        if (node.right != null) {
            res += validPath(node.right, next);
        }
        
        // output 
        
        return res;
    }
}