#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

double divide(int a, int b){
    return double(a) / b;
}

int main() {
    int num1, num2;
    char choice;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Select operation: (a)ddition, (s)ubtraction, (m)ultiplication, (d)ivide: ";
    cin >> choice;
    for(int i = 1; i <= num2; i++){
        switch(choice){
        case 'a':
            cout << num1 << " + "<< i << " = " << add(num1,i) << endl;
            break;
        case 's':
            cout << num1 << " - "<< i << " = " << sub(num1,i) << endl;
            break;
        case 'm':
            cout << num1 << " x "<< i << " = " << mult(num1,i) << endl;
            break;
        case 'd':
            if(num2 == 0){
                cout << "You cannot divide by zero";
            }else{
                cout << num1 << " / "<< i << " = " << divide(num1,i) << endl;
            }
        default:
            cout << "Invalid chouse" << endl;
    }
    }
}