//write a program to print sum of 2 matrices of 3x3
#include <iostream>
using namespace std;
int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    cout << " first 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << " second 3x3 matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of the two matrices:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }   
    return 0;   
}

