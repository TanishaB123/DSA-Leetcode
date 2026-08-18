class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> result;
        for(int i=0; i<strs.size(); i++){
            string piece = strs[i];
            sort(piece.begin(), piece.end());
            mpp[piece].push_back(strs[i]);

        }

        for(auto it:mpp){
            result.push_back(it.second);
        }
        return result;

    }
};