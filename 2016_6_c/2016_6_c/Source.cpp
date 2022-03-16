#include<iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int a[10];

    cout << "Input 10 digit: ";

    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << endl;
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted Ascended Order Element List ...\n";
    for (i = 9; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}