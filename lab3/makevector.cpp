//Problem 1: Making Vectors
//Write a script that prompts the user for a number of entries. Then prompt the user for an integer that number of times and store them in a vector. Print the vector afterwards.


#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "enter the number of entries" << endl;
    cin >> size;
    vector<int> v(size);
    cout << "enter " << size << " integers" << endl;
    for(int i = 0; i < size; i++){
        cin >> v[i];
    }
    cout << "the integers in the vector are: " << endl;
    for(int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}