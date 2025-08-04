//W.A.P to create a matrix of 3x2 having all the even nos in such a way that the nos in the 2nd row should be double of nos in the first row
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];

    cout << "Enter 3 even numbers for the first row:" << endl;
    for (int j = 0; j < 3; ++j) {
        int num;
        cout << "Enter even number at position [0][" << j << "]: ";
        cin >> num;

        while (num % 2 != 0) {
            cout << "Please enter an even number: ";
            cin >> num;
        }

        matrix[0][j] = num;
        matrix[1][j] = 2 * num;
    }

    cout << "\nThe 2x3 matrix is:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
