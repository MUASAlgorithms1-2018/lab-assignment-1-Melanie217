#include <iostream>

using namespace std;

int cubic_mss(const int list[], int size) {
    int n = size/sizeof(int);
    return n;
}


int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int mss1 = cubic_mss(arr1, sizeof(arr1));
    cout << mss1 << endl;

    return 0;
}

