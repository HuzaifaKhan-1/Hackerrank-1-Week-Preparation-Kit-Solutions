#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void plusMinus (vector<int>& arr) {
    double positive_count = 0;
    double negative_count = 0;
    double zero_count = 0;
    double total_count = arr.size();
    
    for (int i = 0 ; i < total_count; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    
    double positive_ratio = positive_count / total_count;
    double negative_ratio = negative_count / total_count;
    double zero_ratio = zero_count / total_count;
    
    cout << fixed << setprecision(6);
    cout << positive_ratio <<"\n"<< negative_ratio <<"\n" << zero_ratio <<"\n";
}


int main () {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    plusMinus(arr);
    return 0;
}
