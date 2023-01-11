class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets;
        int i=0;
        while(i!=s.length()){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                brackets.emplace(s[i]);
            }
            else if (s[i] == ')'){
                if(!brackets.empty() && brackets.top() == '('){
                    brackets.pop();
                }
                else{
                    return false;
                }
            }
            else if (s[i] == '}'){
                if(!brackets.empty() && brackets.top() == '{'){
                    brackets.pop();
                }
                else{
                    return false;
                }
            }
            else if (s[i] == ']'){
                if(!brackets.empty() && brackets.top() == '['){
                    brackets.pop();
                }
                else{
                    return false;
                }
            }
            else{}
            i++;
        }
        if(brackets.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};  