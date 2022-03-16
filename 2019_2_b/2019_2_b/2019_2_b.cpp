#include <iostream>
using namespace std;
int main() {

    int mat1[3][3] = { {0} }, mat2[3][3] = { {0} }, mat3[3][3] = { {0} }, i = 0, j = 0, k = 0;


    cout << "\nEnter values for first 3 x 3 matrix:\n";
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            cin >> mat1[i][j];
    }
    cout << "\n Enter values for second 3 x 3 matrix:\n";
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            cin >> mat2[i][j];
    }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }

    cout << "\nThe product of the above two matrices is:\n";
    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            cout << "\t" << mat3[i][j];
        }
        cout << "\n";
    }

	return 0;
}