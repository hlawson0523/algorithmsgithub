//Problem 2: Pass by Pointer
//Write a script that uses a swap function to switch the values of two integers using their pointers. You should prompt the user for two numbers and store them as variables. Then use the swap function to swap the variables’ values and print them out. You should print your original and swapped values


#include <iostream>
using namespace std;    
int main(){
    int num1, num2, temp;
    int *pnum1, *pnum2;
    cout << "enter two numbers" << endl;
    cin >> num1 >> num2;
    pnum1 = &num1;
    pnum2 = &num2;
    cout << "original numbers: " << *pnum1 << " " << *pnum2 << endl;
    temp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = temp;
    cout << "swapped numbers: " << *pnum1 << " " << *pnum2 << endl;
    return 0;
}