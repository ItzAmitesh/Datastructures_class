//write a program to print product of two matrices of size 4x4
#include <iostream>
using namespace std;

int main() {
    int a[4][4], b[4][4], product[4][4];

    // first matrix
    cout << " first 4x4 matrix:\n";
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            cin >> a[i][j];

    // second matrix
    cout << " second 4x4 matrix:\n";
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            cin >> b[i][j];

    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            product[i][j] = 0;

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            for(int k = 0; k < 4; ++k) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Product of the two matrices:\n";
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}