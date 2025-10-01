//count inversions using merge sort
#include <iostream>
#include <vector>
#include <climits>
using namespace std;    

int mergeAndCount(vector<int> &arr, int p, int q, int r) {
    
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> L;
    vector<int> R;
    for(int i=0; i<n1; i++){
        L.push_back(arr[p+i]);
    }
    for(int j=0; j<n2; j++){
        R.push_back(arr[q+j+1]);
    }
    L.push_back(INT_MAX);
    R.push_back(INT_MAX);



    int i = 0; 
    int j = 0; 
    
    int inversions = 0;
    for(int k = p; k <= r; k++) {
        if(R[j] < L[i]) {
            arr[k] = R[j];
            j++;
            inversions += (n1 - i); 
        } else {
            arr[k] = L[i];
            i++;
        }
    }

    return inversions;
}
int mergeSortAndCount(vector<int> &arr, int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }
    return count;
}

int main(){


    vector<int> arr;
    arr = {1, 20, 6, 4, 5};
    int arr_size = arr.size();
    int result = mergeSortAndCount(arr, 0, arr_size - 1);
    cout << "Number of inversions are " << result << endl;
    return 0;
}