#include <iostream>
using namespace std;

int main() {
    int start, end;
    int odds, evens = 0;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            evens += i;
        }else{
            odds += i;
        }
    }
    cout << "Sum of evens: " << evens << endl;
    cout << "Sum of odds: " << odds << endl;
}