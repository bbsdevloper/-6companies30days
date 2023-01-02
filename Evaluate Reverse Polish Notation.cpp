class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(auto &it:tokens){
            if(it == "+"){
                int second = stoi(st.top());
                st.pop();
                int first = stoi(st.top());
                st.pop();
                st.push(to_string(first + second));
            }
            else if(it == "-"){
                int second = stoi(st.top());
                st.pop();
                int first = stoi(st.top());
                st.pop();
                st.push(to_string(first - second));
            }
            else if(it == "*"){
                int second = stoi(st.top());
                st.pop();
                int first = stoi(st.top());
                st.pop();
                st.push(to_string(first * second));
            }
            else if(it == "/"){
                int second = stoi(st.top());
                st.pop();
                int first = stoi(st.top());
                st.pop();
                st.push(to_string(first / second));
                cout<<st.top()<<endl;
            }
            else{
                st.push(it);
            }
            
        }
        return stoi(st.top());
    }
};