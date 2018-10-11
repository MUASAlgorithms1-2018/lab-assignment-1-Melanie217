#include <iostream>

using namespace std;

int cubic_mss(const int list[], int size) {
    int n = size/sizeof(int);
    int maxSum = 0;
    for (int i = 1; i <= n ; i++) {
        for (int j = i; j <= n ; j++) {
            int thisSum = 0;
            for (int k = i; k <= j ; k++) {
                thisSum = thisSum + list[k-1];
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
    for (int i = 1; i <= n ; i++) {
        int thisSum = 0;
        for (int j = i; j <= n; j++) {
            thisSum = thisSum + list[j-1];
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
    for (int i = 1; i <= n ; i++) {
        thisSum = thisSum + list[i-1];
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}


int main () {
    cout << "Solution should be 9" << endl;
    cout << "_______________________" << endl;
    int arr1[] = {1, 2, -30, 4, 5};
    int cubic = cubic_mss(arr1, sizeof(arr1));
    cout << "Cubic Solution:  " << cubic << endl;
    int quad = quad_mss(arr1, sizeof(arr1));
    cout << "Quadratic Solution:  " << quad << endl;
    int lin = lin_mss(arr1, sizeof(arr1));
    cout << "Linear Solution:  " << lin << endl;
    cout << "_______________________" << endl;


    cout << "Solution should be 0" << endl;
    cout << "_______________________" << endl;
    int arr2[] = {-5};
    int cubic2 = cubic_mss(arr2, sizeof(arr2));
    cout << "Cubic Solution:  " << cubic2 << endl;
    int quad2 = quad_mss(arr2, sizeof(arr2));
    cout << "Quadratic Solution:  " << quad2 << endl;
    int lin2 = lin_mss(arr2, sizeof(arr2));
    cout << "Linear Solution:  " << lin2 << endl;
    cout << "_______________________" << endl;


    cout << "Solution should be 55" << endl;
    cout << "_______________________" << endl;
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cubic3 = cubic_mss(arr3, sizeof(arr3));
    cout << "Cubic Solution:  " << cubic3 << endl;
    int quad3 = quad_mss(arr3, sizeof(arr3));
    cout << "Quadratic Solution:  " << quad3 << endl;
    int lin3 = lin_mss(arr3, sizeof(arr3));
    cout << "Linear Solution:  " << lin3 << endl;
    cout << "_______________________" << endl;


    cout << "Solution should be 21" << endl;
    cout << "_______________________" << endl;
    int arr4[] = {1, 2, -3, 4, 5, -6, 7, -8, 9, 10};
    int cubic4 = cubic_mss(arr4, sizeof(arr4));
    cout << "Cubic Solution:  " << cubic4 << endl;
    int quad4 = quad_mss(arr4, sizeof(arr4));
    cout << "Quadratic Solution:  " << quad4 << endl;
    int lin4 = lin_mss(arr4, sizeof(arr4));
    cout << "Linear Solution:  " << lin4 << endl;
    cout << "_______________________" << endl;
    return 0;

}

