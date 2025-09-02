#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int evalPostfix(string expr) {
        stringstream ss(expr);
        string token;
        stack<int> st;
        while (ss >> token) {
            if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
                st.push(stoi(token));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);
            }
        }
        return st.top();
    }
};

int main() {
    string expr;
    getline(cin, expr);
    Solution sol;
    cout << sol.evalPostfix(expr) << endl;
    return 0;
}
