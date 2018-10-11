#include <iostream>

using namespace std;

int cubic_mss(const int list[], int size) {
    int n = size/sizeof(int);
    int maxSum = 0;
    int thisSum;
    for (int i = 1; i <= n ; ++i) {
        for (int j = i; j <= n ; ++j) {
            thisSum = 0;
            for (int k = i; k <= j ; ++k) {
                thisSum = thisSum + list[k];
                if (thisSum > maxSum) {
                    maxSum = thisSum;
                }
            }
        }
    }
    return maxSum;
}


int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int mss1 = cubic_mss(arr1, sizeof(arr1));
    cout << mss1 << endl;

    return 0;
}

