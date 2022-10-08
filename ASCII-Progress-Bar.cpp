#include <iostream>
using namespace std;

int main()
{
    int percentage;
    char indicators[10] = {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'};

    cin >> percentage;

    for (int i = 0; i < percentage / 10; i++)
    {
        indicators[i] = '+';
    }

    cout << "[";
    for (int i = 0; i < 10; i++)
    {
        cout << indicators[i];
    }
    cout << "] " << percentage << "%";

    return 0;
}
