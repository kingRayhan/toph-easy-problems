#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int input;
    cin >> input;

    int length = to_string(input).length();
    int repeatingNumbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Store the numbers in an array
    for (int i = 0; i < length; i++)
    {
        int digit = input % 10;
        repeatingNumbers[digit]++;
        input /= 10;
    }

    int max = repeatingNumbers[0];
    int maxIndex = 0;
    for (int i = 9; i >= 0; i--)
    {
        if (repeatingNumbers[i] > max)
        {
            max = repeatingNumbers[i];
            maxIndex = i;
        }
    }

    cout << maxIndex << endl;

    return 0;
}