class Solution {
public:

    void helper(int index, vector<int> &ds, vector<int> &nums, vector<vector<int>> &result){

        if(index >= (int)nums.size()){
            result.push_back(ds);
            return;
        }

        ds.push_back(nums[index]);
        helper(index + 1, ds, nums, result);

        ds.pop_back();
        helper(index + 1, ds, nums, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> ds;
       vector<vector<int>> result;
       helper(0, ds, nums, result);
       return result;
    }
};