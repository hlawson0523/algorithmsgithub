//Problem 3: Vector -> Stack
//Write a script that uses the methods of the vector that imitate a stack. Your script should prompt users for non-negative integers until they enter a negative. You should store these values in a vector. After they break the loop, you should start popping from the stack and print the value you are popping then the size of the stack after popping.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> stack;
    cout << "enter non-negative integers to push onto the stack, enter a negative number to stop" << endl;
    while(true){
        int num;
        cin >> num;
        if(num < 0){
            break;
        }
        stack.push_back(num);
    }
    cout << "popping from the stack:" << endl;
    while(!stack.empty()){
        int top = stack.back();
        stack.pop_back();
        cout << "popped: " << top << ", stack size: " << stack.size() << endl;
    }
    return 0;

}