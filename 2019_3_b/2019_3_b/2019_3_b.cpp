#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "Enter number of rows : " <<endl;
    cin >> rows; //number of rows

    for (i = 1; i <= rows; i++){
        for (j = i; j < rows; j++){ /* Print trailing spaces */
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++){ /* Print hollow pyramid */
            /*
             --Print "2" for last row (i==rows),
             --first column(j==1) and 
             --for last column (j==(2*i-1)).
             */
            if (i == rows || j == 1 || j == (2 * i - 1)){
                cout << "2";
            }
            else{
                cout << " ";
            }
        }
        cout << endl; /* Move to next line */
    }

    return 0;
}