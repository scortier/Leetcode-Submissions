//  prequisties
class Solution {
    public int majorityElement(int[] nums) {
        // defining
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            // logical execution
            int num = nums[i];
            // execution of condition 1 or 2
            if(map.get(num)!=null){
                map.put(num,map.get(num)+1);
            } else{
                map.put(num,1);
            }
        }
        // number of times will loop circle
        int maxCount = 0; int number = nums[0];
        // for x number of amount
        for(int num:map.keySet()){
            // logical execution inside  for loop
            if(map.get(num)>maxCount){
                maxCount = map.get(num);
                number = num;
            }
        }
        // returning case
        return number;
    }
}