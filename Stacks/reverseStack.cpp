void inserAtBottom(stack<int> &stack, int x){
    if(stack.empty()){
        stack.push(x);
        return;
    }
    int store = stack.top();
    stack.pop();
    inserAtBottom(stack, x);
    stack.push(store);
}

void reverseStack(stack<int> &stack) {
    // Approach Insert at bottom
    // base case
    if(stack.empty()) return ;
    int x = stack.top();
    stack.pop();
    reverseStack(stack);
    inserAtBottom(stack, x);
} 