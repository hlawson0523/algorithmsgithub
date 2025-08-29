#include <iostream>
using namespace std;

void printFibonacci(int n){
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; ++i) {
            if (i == 0) {
                cout << t1 << " ";
                continue;
            }
            if (i == 1) {
                cout << t2 << " ";
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << " ";
        }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printFibonacci(num);
}