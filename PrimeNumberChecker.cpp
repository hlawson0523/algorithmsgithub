#include <iostream>
using namespace std;

bool isNotPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << (isNotPrime(num)?" is not prime":" is prime");
}