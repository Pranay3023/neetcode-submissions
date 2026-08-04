class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> vt;
         int t=0;

         while(t<=n){
            int c=0;
            int x=t;
            while(x>0){
                if(x&1==1){
                 c++;
                }
                 x=x>>1;

            }
            vt.push_back(c);
            t++;
         }
  return vt;
    }
};
