#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isAccessding = true;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (numbers[i] > numbers[i + 1])
        {
            isAccessding = false;
            break;
        }
    }

    if (isAccessding)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}