//Write a script that prompts the user for an array of integers and an integer k. It should then return the k-th largest integer from that array. If k is greater than the size of the array, return the smallest integer in the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthLargest(const vector<int>& nums, int k) {
    if (k > nums.size()) {
        return *min_element(nums.begin(), nums.end());
    }
    vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end(), greater<int>());
    return sortedNums[k - 1];
}

int main() {
    int n, k;
    cout << "Enter the number of integers in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    int result = kthLargest(nums, k);
    cout << "The " << k << "-th largest integer is: " << result << endl;
    return 0;
}