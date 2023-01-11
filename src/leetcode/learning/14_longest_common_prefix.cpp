class Solution {
public:
    int minimum(int a, int b){
        if(a<=b){
            return a;
        }
        return b;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int i, j, min;
        std::vector<int> common;
        for(i=0;i<strs.size()-1;i++){
            for(j=0;j<minimum(strs[i].length(), strs[i+1].length());j++){
                if(strs[i][j]!=strs[i+1][j]){
                    break;
                }
            }
            common.emplace_back(j);
        }
        min = INT_MAX;
        for(i=0;i<common.size();i++){
            if(common[i]<min){
                min = common[i];
            }
        }
        return strs[0].substr(0, min);
    }
};