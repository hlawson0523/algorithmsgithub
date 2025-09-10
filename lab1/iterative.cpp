
//Problem 1: Iterative Calculator
//Write a script that prompts the user for two numbers and one of the following operations: addition, subtraction, multiplication, division. Perform that operation on the first number and every number 1 through the second number, printing the results.
#include <iostream>
#include <random>
using namespace std;



int main(){
    int num1, num2;
    char operation;
    cout << "enter two numbers and either a(addition), s(subtraction), m(multiplication), or d(division)" << endl;
    
    cin >> num1 >> num2 >> operation;
    if (operation == 'a'){
        
        for(int i = 1; i <= num2; i++){
            cout << num1 + i << endl;
        }
    }
    if (operation == 's'){
        
        for(int i = 1; i <= num2; i++){
            cout << num1 - i << endl;
        }
    }
    if(operation == 'm'){
        
        for(int i = 1; i <= num2; i++){
            cout << num1 * i << endl;
        }
    }
    if(operation == 'd'){     
        for(int i = 1; i <= num2; i++){
            cout << num1 / i << endl;
        }
    }
    else{
        cout << "invalid operation" << endl;
    }
    return 0;

}