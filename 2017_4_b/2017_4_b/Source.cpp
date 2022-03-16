#include <iostream>
using namespace std;
int main()
{
    int n, r, c, s;

    cout << "Enter number of rows: ";
    cin >> n;
    for (r = n; r >= 1; r--)
    {
        for (s = 1; s <= n - r; s++) cout << " ";
        for (c = 1; c <= r; c++) cout << c <<" ";
        cout << endl;
    }

    return 0;
}
