class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxs=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxs){
                return false;
            }
            maxs=max(maxs,i+nums[i]);
        }
        return true;
    }
};