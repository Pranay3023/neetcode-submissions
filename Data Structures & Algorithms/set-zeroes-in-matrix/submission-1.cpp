class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>pr;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0) pr.push_back({i,j});
            }
        }

        
              for(int i=0;i<pr.size();i++){
                int m=pr[i].first;
                int n=pr[i].second;
                for(int j=0;j<matrix.size();j++){
                    matrix[j][n]=0;
                    
                }
                for(int k=0;k<matrix[0].size();k++){
                    matrix[m][k]=0;
                }

              }
            
        
    }
};
