#include <iostream>
using namespace std;
int main()
{
    int n, r, c, s;

    cout << "Enter number of rows: ";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= n - r; s++) cout << " ";
        for (c = 1; c <= r; c++) cout <<"* ";
        cout << endl;
    }

    return 0;
}
