//Write a script that takes an array of names (strings). Starting with the first name, start deleting the k-th name from the array as if the people were sitting in a circle. Keep doing that until only one name remains.

#include <iostream>
#include <vector>
using namespace std;    
string circularElimination(vector<string> names, int k) {
    int index = 0;
    while (names.size() > 1) {
        index = (index + k - 1) % names.size();
        names.erase(names.begin() + index);
    }
    return names[0];
}
int main() {
    vector<string> names = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int k = 3; // Every 3rd name will be eliminated
    string lastName = circularElimination(names, k);
    cout << "The last remaining name is: " << lastName << endl; // Should print the last remaining name
    return 0;
}