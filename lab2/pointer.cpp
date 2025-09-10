//Problem 1: Simple Pointer and Dereferencing
//Write a script that prompts a user for a number and stores the value. Then, make a pointer pointing to it. Prompt the user for another number and use the pointer to change the value of the original integer. You should print your original and changed number.

#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    int *pnum1;
    cout << "enter a number" << endl;
    cin >> num1;
    pnum1 = &num1;
    cout << "original number: " << *pnum1 << endl;
    cout << "enter another number to change the original" << endl;
    cin >> num2;
    *pnum1 = num2;
    cout << "changed number: " << *pnum1 << endl;
    return 0;
}