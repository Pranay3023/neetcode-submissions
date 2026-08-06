class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long sum=0;

        for(auto i:digits){
        sum=sum*10+(i%10);
        }
        sum=sum+1;
        vector<int>ans;

        while(sum>0){
            ans.push_back(sum%10);
            sum=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
