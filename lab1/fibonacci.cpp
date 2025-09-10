
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "how many fibonacci numbers to generate?" << endl;
    cin >> n;
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    cout << "Fibonacci Series: " << endl;
    /*
    if(n == 1){
        cout << t1 << endl;
        return 0;
    }
    if(n == 2){
        cout << t1 << ", " << t2 << endl;
        return 0;
    }
        */
    for(int i = 1; i <= n; ++i){
        cout << t1 << " ";
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;  

    }
}