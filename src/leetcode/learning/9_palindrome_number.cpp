class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int i, size = s.length();
        for(i=0;i<size;i++){
            if(s[i]!=s[size-i-1]){
                return false;
            }
        }
        return true;
    }
};