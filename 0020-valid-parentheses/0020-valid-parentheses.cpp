class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        int i = 0;
        while (i < s.length()) {
            if(s.length() ==1){return false;}
            if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
                ch.push(s[i]);
                i++;
            } else {
                if(ch.empty()){return false;}
                char topChar = ch.top();
                ch.pop();
                if (s[i] == ')' && topChar != '(') {
                    return false;
                } else if (s[i] == ']' && topChar != '[') {
                    return false;
                } else if (s[i] == '}' && topChar != '{') {
                    return false;
                } else {
                    i++;
                }
            }
        
        }
        return ch.empty();
    }
};