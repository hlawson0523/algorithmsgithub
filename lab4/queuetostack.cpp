//Write a script that implements a stack using queues. It should be able to push, pop, peek, and check if empty. Check your stack by pushing a bunch of integers and then popping them all.

#include <iostream>
#include <queue>
using namespace std;    
class StackUsingQueues {
private:
    queue<int> q1, q2;
public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }       
        swap(q1, q2);
    }           
    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }
    int top() {
        if (!q1.empty()) {
            return q1.front();
        }
        return -1; // Return -1 if stack is empty
    }
    bool empty() {
        return q1.empty();
    }
};  

int main() {
    StackUsingQueues stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Top element: " << stack.top() << endl; // Should print 3
    stack.pop();
    cout << "Top element after pop: " << stack.top() << endl; // Should print 2
    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl; // Should print No
    stack.pop();
    stack.pop();
    cout << "Is stack empty after popping all elements? " << (stack.empty() ? "Yes" : "No") << endl; // Should print Yes
    return 0;
}