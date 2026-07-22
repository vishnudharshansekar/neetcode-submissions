class Solution {
public:
    bool isValid(string s) {
        stack<char> res;
        for(char c : s){
            if(c=='{'||c=='['||c=='('){
                res.push(c);
            }
            else{
                if(res.empty())
                return false;
            
            char top=res.top();
            res.pop();
            if(c=='}' && top!='{'){
                return false;
            }
            if(c==']' && top!='['){
                return false;
            }
             if(c==')' && top!='('){
                return false;
            }
        }
        }
        return res.empty();
    }
};
