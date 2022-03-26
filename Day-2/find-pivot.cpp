class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        
        for(int i: nums)
            totalSum += i;
        
        int leftsum = 0;
        
        for(int i=0; i< nums.size(); i++){
            totalSum -= nums[i];
            
            if(leftsum == totalSum)
                return i;
            
            leftsum += nums [i];
        }
        return -1;
    }
};