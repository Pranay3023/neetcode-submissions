class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<nums.size()-2;i++){
        int j=i+1;
        int k=nums.size()-1;

        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
     j++;
            }
            else{
         ans.push_back({nums[i],nums[j],nums[k]});
         j++;
         k--;
            }
        }
    }
  set<vector<int>> stt;
  for(int i=0;i<ans.size();i++){
    stt.insert(ans[i]);
  }
vector<vector<int>> ans1(stt.begin(), stt.end());
  return ans1;
        
    }
};
