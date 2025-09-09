#include <iostream>
#include <random>
using namespace std;

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

int main(){
    int numInts, val;
    vector<int> nums;
     
    cout << "Enter number of ints to generate and value to search for: ";
    cin >> numInts >> val;
    nums = generate(numInts);
    for (int i=0; i<numInts; i++){
        if(val == nums[i]){
            cout << "Found " << val << " at index " << i << endl;
            return i;
        }
        
    }
    cout << "value not present";
    return -1;
}

