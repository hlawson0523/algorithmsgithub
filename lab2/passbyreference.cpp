//Problem 3: Pass by Reference
//Write a script that uses a swap function to switch the values of two integers using their references. You should prompt the user for two numbers and store them as variables. Then use the swap function to swap the variables’ values and print them out. You should print your original and swapped values.
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int num1, num2;
    cout << "enter two numbers" << endl;
    cin >> num1 >> num2;
    cout << "original numbers: " << num1 << " " << num2 << endl;
    swap(num1, num2);
    cout << "swapped numbers: " << num1 << " " << num2 << endl;
    return 0;
}