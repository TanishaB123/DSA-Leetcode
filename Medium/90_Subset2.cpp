class Solution {
public:

void func(int i, vector<int> &ds, vector<int> &nums, vector<vector<int>> &set){

    if(i>=(int)nums.size()){
        set.push_back(ds);
        return;
    }
    ds.push_back(nums[i]);
    func(i+1, ds, nums, set);
    ds.pop_back();
    while(i+1<nums.size()&& nums[i]==nums[i+1]){
        i++;
    }
    func(i+1, ds, nums, set);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> set;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        func(0, ds, nums, set);

        return set;

    }
};