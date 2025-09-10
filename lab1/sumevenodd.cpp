//Problem 3: Sum of Even and Odd
//Write a script that sums the odd numbers and even numbers in a given range. Prompt the user for two inputs, the start and end of the range. Then print the sums of the odd numbers and the even numbers within that range.
#include <iostream>
using namespace std;


int main(){

    int start, end, evensum = 0, oddsum = 0;
    cout << "enter the start and end of the range" << endl;
    cin >> start >> end;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            evensum += i;
        }
        else{
            oddsum += i;
        }
    }
    cout << "sum of evens: " << evensum << endl;
    cout << "sum of odds: " << oddsum << endl;
    return 0;
}