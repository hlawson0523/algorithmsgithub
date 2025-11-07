//longest common subsequence
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

void LCS(const string& X, const string& Y,
         vector<vector<int>>& c, vector<vector<string>>& b) {
    int m = X.size();
    int n = Y.size();

    c.assign(m + 1, vector<int>(n + 1, 0)); // i had to look this up - assign basically creates the matrix and fills it up
    b.assign(m + 1, vector<string>(n + 1, ""));


    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) { //same, take diagonal
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = "d"; 
            } else if (c[i - 1][j] >= c[i][j - 1]) { //now, instead of comparing X and Y, need to compare c values
                c[i][j] = c[i - 1][j];
                b[i][j] = "u"; //different, take top
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = "l"; // different, take left
            }
        }
    }
}

void printC(const vector<vector<int>>& c) {
    cout << "c: "<<endl;
    int m = c.size();
    int n = c[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << c[i][j] << "\t"; 
        }
        cout << "\n";
    }
}

void printB(const vector<vector<string>>& b) {
    cout << "b: "<<endl;
    int m = b.size();
    int n = b[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][j].empty())
                cout << ".\t"; 
            else
                cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main() {
    string X = "ABCBDAB";
    string Y = "BDCABA";

    vector<vector<int>> c;
    vector<vector<string>> b;

    LCS(X, Y, c, b);

    printC(c);
    printB(b);

    cout << "lcs length: " << c[X.size()][Y.size()] << endl;

    return 0;
}
