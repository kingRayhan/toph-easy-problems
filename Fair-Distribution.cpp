#include <iostream>
using namespace std;

bool hasFaction(double number)
{
    return number != (int)number;
}

int main()
{
    int numberOfChildren, numberOfChocolates, extraAmount = 0;
    cin >> numberOfChildren >> numberOfChocolates;

    int initialNumberOfChocolates = numberOfChocolates;

    while (true)
    {
        double divison = (double)numberOfChocolates / numberOfChildren;
        if (!hasFaction(divison))
        {
            extraAmount = numberOfChocolates - initialNumberOfChocolates;
            break;
        }

        numberOfChocolates++;
    }

    cout << extraAmount << endl;

    return 0;
}