//Problem 4: Plussing the Pointer
//Write a script that creates an integer array with a pointer pointing to the first value and print the values in the array using the pointer. To do this, you can either use ++ on your pointer or just + <number> on your pointer.
#include <iostream>
using namespace std;
#include <vector>
int main(){
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "enter the values in the array" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int *parr = &arr[0];
    cout << "values in the array using pointer:" << endl;
    for(int i = 0; i < size; i++){
        cout << *(parr + i) << " ";
    }
    cout << endl;
    return 0;
}