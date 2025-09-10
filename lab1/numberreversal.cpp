//Problem 5: Number Reversal
//Write a script that reverses the order of a number. Prompt the user for a number and return the number in reverse. For example: 1234 -> 4321, 10 -> 1, 111 -> 111.
#include <iostream>
using namespace std;

int main(){

    int num;
    int reversed = 0;
    int digit;
    cout << "enter a number to reverse" << endl;
    cin >> num;
    while(num!=0){
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;

    }
    cout << "reversed number: " << reversed << endl;
    return 0;
    


}