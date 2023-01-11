class Solution {
public:
    int lengthOfLastWord(string s) {
        string pre;
        vector<string> s_vector;
        int i;
        for(i=0;i<s.length();i++){
            if(s[i] !=  ' '){
                pre = pre + s[i];
            }
            else if(!pre.empty()){
                s_vector.emplace_back(pre);
                pre = "";
            }
        }
        if (pre.length() > 0 and pre != " "){
            s_vector.emplace_back(pre);
        }
    return s_vector[s_vector.size() - 1].length();
    }
};