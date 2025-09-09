#include <iostream>
#include <random>
using namespace std;
/*
Smallind = 1
Int hold
For i = 1 to n-1 \\goes through every number but the first
	
	For j = i+1 to n \\checks all numbers after i
		If A[smallind] > A[j]
Smallind = j	
	\\Swap
	Hold = A[i]
	A[i] = A[smallind]
	A[smallind] = A[i]
	




*/
vector<int> generate(int numInts){
    vector<int> toret;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    for(int i=0; i<numInts; i++){
        toret.push_back(dis(gen));
    }
    for(int i=0; i<numInts; i++){
        cout << toret[i] << " ";
    }
    cout << endl;
    return toret;
}

vector<int> sort(vector<int> input){
    int hold;
    int smallind = 0;
    for(int i = 0;i<input.size()-1;i++){
        smallind = i;
        for(int j = i+1;j<input.size();j++){
            if (input[smallind] > input[j]){
                smallind = j;
            }
            
            
        }
        hold = input[smallind];
        input[smallind] = input[i];
        input[i] = hold;
    }
    return input;
}

int main() {
    int numints;
    vector<int> nums;
    cout << "size of vector: ";
    cin >> numints;
    nums = generate(numints);
    nums = sort(nums);
    for(int i = 0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    return 0;

}