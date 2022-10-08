#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string input;
    cin >> input;

    // Make the first character an uppercase
    input[0] = toupper(input[0]);

    // Replace all s with $
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 's')
            input[i] = '$';
        else if (input[i] == 'i')
            input[i] = '!';
        else if (input[i] == 'o')
            input.replace(i, 1, "()");
    }

    // Append a . (period) at the end of the password
    cout << input << "." << endl;

    return 0;
}