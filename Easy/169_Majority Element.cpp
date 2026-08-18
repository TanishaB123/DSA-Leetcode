class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]] +=1;
        }

        int maxval = INT_MIN;
        int maxkey = INT_MIN;
        for(auto it:mpp){
            if(maxval<it.second){
                maxval = it.second;
                maxkey = it.first;
            }
        }
        return maxkey;
    }
};