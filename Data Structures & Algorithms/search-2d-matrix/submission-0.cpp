class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st=0;
        int ed=(matrix.size()*matrix[0].size())-1;
        while(ed>=st){
            int mid=st+(ed-st)/2;
            int row=mid/matrix[0].size();
            int col=mid%matrix[0].size();
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) ed=mid-1;
            else st=mid+1;
        }
        return false;
    }
};
