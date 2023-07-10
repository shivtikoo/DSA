bool isValidParenthesis(string expression)
{
    // Write your code here.
    int n = expression.length();
    stack<char> st;

    for (int i=0;i<n;i++){
        if (st.empty()) st.push(expression[i]);

        else if (st.top() == '{' && expression[i] == '}')
            st.pop();
        
        else if (st.top() == '[' && expression[i] == ']')
            st.pop();
        
        else if (st.top() == '(' && expression[i] == ')')
            st.pop();

        else st.push(expression[i]);
    }

    return st.empty();
}