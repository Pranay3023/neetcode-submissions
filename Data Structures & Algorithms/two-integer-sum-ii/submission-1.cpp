class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> temp;
        int sum=0;
        int l=0,r=numbers.size()-1;
        while(l<r){
            sum=numbers[l]+numbers[r];
            if(sum==target){
                temp.push_back(l+1);
                temp.push_back(r+1);
                return temp;
            }
           else if(sum<target){

              l++;

            }
            else{
  r--;
            }
        }
        
    }
};
