// write a program to print diagonal of a 4x4 martics
#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Main diagonal elements:\n";
    for(int i = 0; i < 4; ++i) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}