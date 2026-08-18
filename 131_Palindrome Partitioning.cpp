class Solution {
public:

void func(int index, vector<string>& ds, vector<vector<string>>& result, string s){
    if(index == s.size()){
        result.push_back(ds);
        return;
    }

    for(int i=index; i<s.size(); i++){
        string piece = s.substr(index, i-index+1);
        string rev = piece;
        reverse(rev.begin(), rev.end());

        if(piece == rev){
            ds.push_back(piece);
            func(i+1, ds, result, s);
            ds.pop_back();
        }
    }
    
}
    vector<vector<string>> partition(string s) {
        
        vector<string>ds;
        vector<vector<string>>result;

        func(0, ds, result, s);

        return result;
    }
};