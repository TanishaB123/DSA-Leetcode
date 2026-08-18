class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()==t.size()){
        unordered_map<char,int>mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]] +=1;
        }
        for(int i=0; i<t.size(); i++){
            mpp[t[i]] -=1;
        }

        for(char i='a'; i<='z'; i++){
            if(mpp[i]==0){
                
            }
            else return false;
        }
        }
        else return false;

return true;
    }
};