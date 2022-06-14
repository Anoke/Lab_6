#include <iostream>
#include "Iterator.h"
#include <vector>
using namespace std;
bool funcInt(int x) {
    return x > 0;
}

bool funcSort(int x, int y) {
    return x < y;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << ((none_of(arr.begin(), arr.end(), funcInt)) ? "TRUE" : "FALSE") << endl;
    cout << ((is_sorted(arr.begin(), arr.end(), funcSort)) ? "TRUE" : "FALSE") << endl;

    auto it = find_not(arr.begin(), arr.end(), 1);
    if (it != arr.end()) {
        cout << *it << endl;
    }

    arr.push_back(-1);
    cout << ((is_sorted(arr.begin(), arr.end(), funcSort)) ? "TRUE" : "FALSE") << endl;
    return 0;
}