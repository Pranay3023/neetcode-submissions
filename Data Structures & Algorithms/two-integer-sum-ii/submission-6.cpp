class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int s=0;
      int e=numbers.size()-1;
      int sum=0;
        while(s<e){
            sum=numbers[s]+numbers[e];
            if(sum>target) e--;
            else if (sum==target) return {s+1,e+1};
            else s++;
        }
        return { };
    }
};
