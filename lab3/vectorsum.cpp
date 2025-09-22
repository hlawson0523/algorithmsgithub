//Problem 2: Iterative Summing
//Write a script that prompts the user for non-negative numbers (these include integers in the range [0,infinity]) until they enter a negative number. Store these values in a vector, then use vector iterators to iterate through the vector and sum up the values. Print out the sum.
//
#include <iostream>
#include <vector>
using namespace std;
#include <random>

int main(){
    vector<int> nums;
    cout << "enter non-negative numbers to sum, enter a negative number to stop" << endl;
    while(true){
        int num;
        cin >> num;
        if(num < 0){
            break;
        }
        nums.push_back(num);
    }
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    cout << "the sum of the numbers is: " << sum << endl;
    return 0;


}