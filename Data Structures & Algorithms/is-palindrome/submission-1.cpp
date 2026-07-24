class Solution {
public:
    bool isPalindrome(string s) {
        for(auto & i:s){
            i=toupper(i);
            
        }
        int st=0;
        int e=s.size()-1;
        while(st<e){
         while (st<e && !((s[st] >= 'A' && s[st] <= 'Z') ||
         (s[st] >= '0' && s[st] <= '9'))) {
    st++;
}
while (st<e && !((s[e] >= 'A' && s[e] <= 'Z') ||
         (s[e] >= '0' && s[e] <= '9'))) {
    e--;
}
           if(s[st]!=s[e]) return false;
           
            e--;
            st++;
        }
        return true;
        
    }
};
