class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int vote = 1;
        int candidate = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == candidate){
                vote++;
            }
            else{
                vote--;
                if(vote == 0){
                    candidate = nums[i];
                    vote++;
                }       
            }
        }
        
        return candidate;
    }
};