#include <vector>
#include <iostream>
#include <random>
using namespace std;

int reclinsearch(vector<int> arr, int index, int val){
    if(index >= arr.size()){
        
        return -1;
    }
    if(arr[index] == val){
        return index;
    }
    return reclinsearch(arr, index+1, val);


}

int main(){

    vector<int> arr;
    int numInts, val;
    cout << "Enter number of ints to generate and value to search for (between 1 and 10): ";
    cin >> numInts >> val;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);
    for(int i=0; i<numInts; i++){
        arr.push_back(dis(gen));
    }
    for(int i=0; i<numInts; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = reclinsearch(arr,0,val);
    if(result ==-1){
        cout << "value not found" << endl;
    }
    else{
        cout << "found " << val << " at index " << result << endl;
    }
    return 0;


}