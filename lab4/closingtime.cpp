//Write a script that will make sure you have matching parenthesis, brackets, and curly braces. Given a string made up of parenthesis (), brackets [], and curly braces {}, make sure that none are left open.
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
    stack<char> st;
    cout << "enter a string of parenthesis, brackets, and curly braces" << endl;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.empty() || st.top() != '('){
                cout << "not balanced" << endl;
                return 0;
            }
            st.pop();
        }
        else if(s[i] == ']'){
            if(st.empty() || st.top() != '['){
                cout << "not balanced" << endl;
                return 0;
            }
            st.pop();
        }
        else if(s[i] == '}'){
            if(st.empty() || st.top() != '{'){
                cout << "not balanced" << endl;
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout << "balanced" << endl;
    }
    else{
        cout << "not balanced" << endl;
    }
    return 0;
}