#include <algorithm>
#include<iostream>
#include<stack>

using namespace std;

#include<stack>

class MinStack {
private:
    stack<int> Stack;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
       Stack.push(val);
       if(minstack.empty() || Stack.top() < minstack.top()){
        minstack.push(val);

       }else{
        minstack.push(minstack.top());
       }
        
    }
    
    void pop() {
        Stack.pop();
        minstack.pop();
        
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return minstack.top();
        
    }
};

