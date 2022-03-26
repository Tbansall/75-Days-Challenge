class Solution {
    public int removeDuplicates(int[] nums) {
      int k = 0,j=1,i=0;
        while(i <nums.length && j<nums.length){
           if(nums[i]==nums[j]);
            else
            {
                nums[k++] = nums[i];
            }
            i++;
            j++;
        }
        nums[k++] = nums[nums.length-1];
        return k;
    }
}