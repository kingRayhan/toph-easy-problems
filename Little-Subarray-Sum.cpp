#include <iostream>
using namespace std;

int main()
{
    int n, a, b, result = 0;
    cin >> n >> a >> b;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = a; i <= b; i++)
    {
        result += numbers[i];
    }

    cout << result;

    return 0;
}