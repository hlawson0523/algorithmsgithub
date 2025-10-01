//Write a script that takes multiple sorted arrays and merges them into one sorted array. 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Structure to store heap elements
struct HeapNode {
    int value;   // The actual element
    int arrIdx;  // Which array it belongs to
    int elemIdx; // Index inside that array

    bool operator>(const HeapNode &other) const {
        return value > other.value;
    }
};

vector<int> mergeSortedArrays(const vector<vector<int>>& arrays) {
    priority_queue<HeapNode, vector<HeapNode>, greater<HeapNode>> minHeap;
    vector<int> result;

    // Push the first element of each array into the min-heap
    for (int i = 0; i < arrays.size(); i++) {
        if (!arrays[i].empty()) {
            minHeap.push({arrays[i][0], i, 0});
        }
    }

    // Extract the smallest element, and push the next element of that array
    while (!minHeap.empty()) {
        HeapNode current = minHeap.top();
        minHeap.pop();

        result.push_back(current.value);

        int nextIdx = current.elemIdx + 1;
        if (nextIdx < arrays[current.arrIdx].size()) {
            minHeap.push({arrays[current.arrIdx][nextIdx], current.arrIdx, nextIdx});
        }
    }

    return result;
}

int main() {
    vector<vector<int>> arrays = {
        {1, 4, 7},
        {2, 5, 8},
        {0, 6, 9, 10}
    };

    vector<int> merged = mergeSortedArrays(arrays);

    cout << "Merged sorted array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}