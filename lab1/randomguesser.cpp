//Problem 2: Random Number Guesser
//Write a script that generates a random number between 1 and 100. Prompt the user to guess a number repeatedly until they get it. Tell the user if they are too high or too low. Upon getting, display the number of attempts it took to get it.
#include <iostream>
#include <random>
using namespace std;
int main(){
    int guess, randnum, tries = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    randnum = dis(gen);
    cout << "guess a number between 1 and 100" << endl;
    while(guess != randnum){
        cin >> guess;
        tries++;
        if(guess < randnum){
            cout << "too low" << endl;
        }
        if(guess > randnum){
            cout << "too high" << endl;
        }
        if(guess == randnum){
            cout << "you got it! it took you " << tries << " tries" << endl;
        }
    }
    return 0;








}