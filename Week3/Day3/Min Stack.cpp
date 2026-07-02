#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
    stack<int> mainStack;
    stack<int> minStack;
    
public:
    void push(int val) {
        mainStack.push(val);
        
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
