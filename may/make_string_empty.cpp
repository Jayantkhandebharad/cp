class Solution {
public:
    bool ispal(string s){
        if(s.size()<=1)
        {
            return true;
        }
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(ispal(s)){
            return 1;
        }
        return 2;
    }
};
