#include <iostream>
using namespace std;

int main()
{
    int a11, a12, a21, a22, b11, b12, b21, b22;

    cin >> a11 >> a12;
    cin >> a21 >> a22;
    cin >> b11 >> b12;
    cin >> b21 >> b22;

    int c1 = a11 * b11 + a12 * b21;
    int c2 = a11 * b12 + a12 * b22;
    int c3 = a21 * b11 + a22 * b21;
    int c4 = a21 * b12 + a22 * b22;

    cout << c1 << " " << c2 << endl;
    cout << c3 << " " << c4 << endl;

    return 0;
}