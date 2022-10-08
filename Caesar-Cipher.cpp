#include <iostream>
#include <string>
using namespace std;

int main()
{
    int shiftLeftAmount;
    string messageText;

    cin >> shiftLeftAmount;
    getline(cin >> ws, messageText);

    for (int i = 0; i < messageText.length(); i++)
    {
        if (messageText[i] == ' ')
            continue;

        int ascii_code = (int)messageText[i];

        if ((ascii_code - shiftLeftAmount) < 97)
        {
            int diff = 97 - (ascii_code - shiftLeftAmount);
            ascii_code = 123 - diff;
        }
        else
        {
            ascii_code -= shiftLeftAmount;
        }

        messageText[i] = (char)ascii_code;
    }

    cout << messageText << endl;
}
