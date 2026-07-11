class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int sec=target-first;
            if(m.find(sec)!=m.end()){ // it is  a slt funcation 
                ans.push_back(i);
                ans.push_back(m[sec]);
                return ans;
            }
            m[first] = i; // if not find that store in map value and index
        }
        return ans;
    }
};