//Write a script that goes through an array of positive integers and gets the next number to the right of each number that is greater than it (returning -1 if none are) and returns a new array with those numbers. For example: [1,2,3,1,2,5,4,3,1] -> [2,3,5,2,5,-1,-1,-1] 

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> whosGreater(const vector<int>& nums) {
    vector<int> result(nums.size(), -1);
    stack<int> st; // Stack to keep track of indices

    for (int i = 0; i < nums.size(); ++i) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }

    return result;
}
int main() {
    vector<int> nums = {1, 2, 3, 1, 2, 5, 4, 3, 1};
    vector<int> result = whosGreater(nums);
    cout << "Resulting array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; // Should print: 2 3 5 2 5 -1 -1 -1 -1
    return 0;
}