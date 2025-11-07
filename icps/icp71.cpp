#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void matrixChainMultiplication(const vector<int>& p, vector<vector<int>>& m, vector<vector<int>>& s) {
    int n = p.size() - 1;

    for (int i = 1; i <= n; i++)
        m[i][i] = 0;

    for (int L = 2; L <= n; L++) {
        for (int i = 1; i <= n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}



void printM(const vector<vector<int>>& m) {
    int n = m.size() - 1;
    cout << "m: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < i)
                cout << "-\t";  
            else
                cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

void printS(const vector<vector<int>>& s) {
    int n = s.size() - 1;
    cout << "s: "<<endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i)
                cout << "-\t";   
            else
                cout << s[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    vector<int> p = {30,35,15,5,10,20,25};
    int n = p.size() - 1;

    vector<vector<int>> m(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> s(n + 1, vector<int>(n + 1, 0));

 
    matrixChainMultiplication(p, m, s);

    cout << "minimum number of multiplications: " << m[1][n] << endl;

    
    printM(m);
    printS(s);

    return 0;
}