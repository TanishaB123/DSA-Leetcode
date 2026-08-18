class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())  return 0;

        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen = 1;
        for(auto it:s){
            if(s.find(it-1)!=s.end()) continue;
            int curr=1;
            int next = it;
            while(s.find(next+1)!=s.end()){
                next=next+1;
                curr++;
            }
            maxlen = max(curr,maxlen);
        }
        return maxlen;
    }
};