class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stt;
        vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
        
            if(i==0){
                stt.push(i);
            }
        else{
            while(!stt.empty() && temperatures[stt.top()]<temperatures[i])
            {
                ans[stt.top()]=i-stt.top();
                stt.pop();
                


            }
            stt.push(i);
        }
        }
        return ans;

    }
};
