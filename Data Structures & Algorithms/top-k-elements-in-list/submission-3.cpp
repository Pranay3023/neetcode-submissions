class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int> ans;
      map<int,int>mpp;
      vector<pair<int,int>> pr;
      for(auto i:nums){
       mpp[i]++;
      }
      for(auto entry:mpp){
        
            pr.push_back({entry.second,entry.first});
    
      }
      sort(pr.begin(),pr.end());
      int max1=pr.size()-1;
     
      for(int i=0;i<k;i++){
           ans.push_back(pr[max1].second);
           max1--;
      }
       return ans;
    }
   
};
