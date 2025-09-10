//Problem 4: Prime Number Checker
//Write a script that checks if a number is prime or not. Prompt the user for a number and print if it is prime or not.
#include <iostream>
using namespace std;

int main(){
    int num, prime = 1;
    cout << "enter a number" << endl;
    cin >> num;
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1 && num > 1){
        cout << num << " is prime" << endl;
    }
    else{
        cout << num << " is not prime" << endl;
    }
    return 0;

}