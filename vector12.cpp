#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr1, arr2;
    cout << "Enter elements of first array (negative to stop): ";
    int val;
    while (cin >> val && val >= 0) {
        arr1.push_back(val);
    }
    cout << "Enter elements of second array (negative to stop): ";
    while (cin >> val && val >= 0) {
        arr2.push_back(val);
    }
    for (auto x : arr2) {
        if (find(arr1.begin(), arr1.end(), x) == arr1.end()) {
            arr1.push_back(x);
        }
    }
    sort(arr1.begin(), arr1.end());
    cout << "Merged array: ";
    for (auto x : arr1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
