// defining classes
class Solution {
    public List<String> buildArray(int[] target, int n) {
        // listing arryas
        List<String> res = new ArrayList<>();
        // looping
        int i = 0, j = 1;
        
        // while looping
        while (i < target.length)
        {
            // addition
            res.add("Push");
            // looping if-else
            if(target[i] != j)
                // addition of res.
                res.add("Pop");
            // looping else
            else 
                // looping number of times
                i++;
            // overall loops
            j++;
        } 
        // returning value
        return res;
    }
}