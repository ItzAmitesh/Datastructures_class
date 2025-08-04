//6. Input a 2D Array (3x3) and Display it in Matrix Form

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Ener 9 elements for 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    cout << "matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
