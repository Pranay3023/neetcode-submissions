class Solution {
public:
    bool isHappy(int n) {
     unordered_set<int> stt;
     

        while(n!=1){
            int k=n;
            int sum=0;
            while(k>0){
                sum=sum+((k%10)*(k%10));
                k=k/10;
            }
            n=sum;
            if(stt.find(n)!=stt.end()){
                return false;
            }
             else{
                stt.insert(sum);
             }
        }
        return true;
    }
};
