class Solution {
public:
    int romanToInt(string s) {
        int i = 0, final_value = 0, size = s.length();
        while(i<size){
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    final_value = final_value + 4;
                    i++;
                }
                else if (s[i+1]=='X'){
                    final_value = final_value + 9;
                    i++;
                }
                else{
                    final_value = final_value + 1;
                }
            }
            else if (s[i]=='V'){
                final_value = final_value + 5;
            }
            else if (s[i]=='X'){
                if(s[i+1]=='L'){
                    final_value = final_value + 40;
                    i++;
                }
                else if (s[i+1]=='C'){
                    final_value = final_value + 90;
                    i++;
                }
                else {
                    final_value = final_value + 10;
                }
            }
            else if (s[i]=='L'){
                final_value = final_value + 50;
            }
            else if (s[i]=='C'){
                if(s[i+1]=='D'){
                    final_value = final_value + 400;
                    i++;
                }
                else if (s[i+1]=='M'){
                    final_value = final_value + 900;
                    i++;
                }
                else{
                    final_value = final_value + 100;
                }
            }
            else if (s[i]=='D'){
                final_value = final_value + 500;
            }
            else if (s[i]=='M'){
                final_value = final_value + 1000;
            }
            i++;
        }
        return final_value;
    }
};