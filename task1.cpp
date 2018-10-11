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

int quad_mss(const int list[], int size) {
    int n = size/sizeof(int);
    int maxSum = 0;
    int thisSum;
    for (int i = 1; i <= n ; ++i) {
        thisSum = 0;
        for (int j = i; j <= n; ++j) {
            thisSum = thisSum + list[j];
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

int lin_mss(const int list[], int size) {
    int n = size/sizeof(int);
    int maxSum = 0;
    int thisSum = 0;
    for (int i = 1; i <= n ; ++i) {
        thisSum = thisSum + list[i];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}


int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int cubic = cubic_mss(arr1, sizeof(arr1));
    cout << "Cubic Solution:  " << cubic << endl;
    int quad = quad_mss(arr1, sizeof(arr1));
    cout << "Quadratic Solution:  " << quad << endl;
    int lin = lin_mss(arr1, sizeof(arr1));
    cout << "Linear Solution:  " << lin << endl;
    return 0;
}

