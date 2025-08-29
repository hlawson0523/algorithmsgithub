#include <iostream>
using namespace std;

int generateNumber(){
    return rand() % 100 + 1;
}

int main(){
    int guess;
    int attempts = 0;
    int target = generateNumber();
    while(guess != target){
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        attempts++;
        if(guess > target){
            cout << "Too high, try again" << endl;
        } else if (guess < target){
            cout << "Too low, try again!" << endl;
        }
    }
    cout << "Congratulations! You got it in " << attempts << " attempts!" << endl;
}