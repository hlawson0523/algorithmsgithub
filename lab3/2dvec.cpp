//Problem 6: Entering 2D
//Write a script that creates a 2D vector with user inputted values. Prompt the user for non-negative values until they enter a negative to stop the loop. You should store vectors of that length into a main vector. Therefore you should have a vector of this shape: [[  ,  ], [], [  ,  ,  ]] for a user input of 2, 0, 3. You then need to iterate through the inside vectors and fill them with user input values turning our vector into [[1,2], [], [4,-5,0]]. You should then print the 2D vector. 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> vec2d;
    int size, val;
    cout << "enter the sizes of the inner vectors, enter a negative number to stop" << endl;
    while(true){
        cin >> size;
        if(size < 0){
            break;
        }
        vec2d.push_back(vector<int>(size));
    }
    for(int i = 0; i < vec2d.size(); i++){
        cout << "enter " << vec2d[i].size() << " values for inner vector " << i+1 << endl;
        for(int j = 0; j < vec2d[i].size(); j++){
            cin >> val;
            vec2d[i][j] = val;
        }
    }
    cout << "the 2D vector is: " << endl;
    for(int i = 0; i < vec2d.size(); i++){
        cout << "[ ";
        for(int j = 0; j < vec2d[i].size(); j++){
            cout << vec2d[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;

}