class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto token: tokens){
            if(token == "+" ||token == "-" ||token == "/" ||token == "*"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                int eval;
                if(token == "+"){
                    eval = a + b;
                }else if(token == "-"){
                    eval = a - b;
                }else if(token == "/"){
                    eval = a/b;
                }else if(token == "*"){
                    eval = a*b;
                }
                s.push(eval);
            }else{
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};
