//Problem 6: String Reversal
//Write a script that takes a string and reverses it by using two pointers. One pointer should start at the beginning and the other at the end. You should print your original and reversed string.


#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "enter a string to reverse" << endl;
    getline(cin, str);
    cout << "original string: " << str << endl;
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    cout << "reversed string: " << str << endl;
    return 0;
}