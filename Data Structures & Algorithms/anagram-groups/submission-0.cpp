class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>>mpp;
        string temp;
        for(int i=0;i<strs.size();i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(strs[i]);
           

            
        }
        for(auto entry:mpp){
            ans.push_back(entry.second);
        }
        return ans;
    }
};
