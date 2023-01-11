class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string final_str = "";
        int i, carry = 1;
        for(i=0;i<digits.size();i++){
            final_str = final_str + to_string(digits[i]);
        }
        reverse(final_str.begin(), final_str.end());
        i = 0;
        while(carry!=0){
            int ac;
            if(i<final_str.length()){
                ac = final_str[i] - '0';
                ac = ac + carry;
                if(ac<10){
                    final_str[i] = '0' + ac;
                    carry=0;
                }
                else{
                    final_str[i] = '0' + (ac%10);
                    carry = ac/10;
                }
            }
            else{
                ac = 0;
                ac = ac + carry;
                if(ac<10){
                    final_str = final_str + to_string(ac);
                    carry=0;
                }
                else{
                    final_str = final_str + to_string(ac%10);
                    carry = ac/10;
                }
            }
            i++;
        }
        reverse(final_str.begin(), final_str.end());
        vector<int> result;
        for(i=0;i<final_str.length();i++){
            result.emplace_back(final_str[i] - '0');
        }
        return result;
    }
};