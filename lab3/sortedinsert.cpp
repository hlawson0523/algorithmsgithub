//Problem 5: Sorted Insert
//Write a script that prompts the user for non-negative numbers until they enter a negative to stop the loop. You need to insert these values into a vector in sorted order. After the user exits the loop, print the sorted vector. 


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int num;
    int rover;
    cout << "enter non-negative numbers to insert in sorted order, enter a negative number to stop" << endl;
    while(true){
        cin >> num;
        if(num < 0){
            break;
        }
        if(nums.empty()||num >= nums.back()){
            nums.push_back(num);
            continue;
        }
        for(rover = 0; rover < nums.size(); rover++){
            if(num <= nums[rover]){
                nums.insert(nums.begin()+rover, num);
                break;
            }
        }
    }
    cout << "the sorted vector is: " << endl;
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
        

    }
    cout << endl;
    return 0;

}