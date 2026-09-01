class Solution {
    public int removeDuplicates(int[] nums) {
        LinkedHashSet<Integer> map = new LinkedHashSet<>();
        int count = 0;
        for(int i=0;i<nums.length;i++){
           map.add(nums[i]);
        }

        int i=0;
       
       for(int num:map){
            nums[i] = num;
            i++;
       }


        return map.size();
    }
}