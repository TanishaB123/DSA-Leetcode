class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int n;
        for(int i=0; i < nums.size(); i++){
            n = target - nums[i];
            if(mpp.find(n) != mpp.end()){
                return {i,mpp[n]};
            }
            else mpp[nums[i]] = i;
        }
        return {};
    }
};