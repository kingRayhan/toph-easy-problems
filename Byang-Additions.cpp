#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int length_a = to_string(a).length();
	int length_b = to_string(b).length();
	int number1[length_a];
	int number2[length_b];

	for (int i = 0; i < length_a; i++)
	{
		number1[i] = a % 10;
		a = a / 10;
	}

	for (int i = 0; i < length_b; i++)
	{
		number2[i] = b % 10;
		b = b / 10;
	}

	bool hasCarry = false;

	for (int i = 0; i < length_a; i++)
	{
		if (number1[i] + number2[i] > 9)
		{
			hasCarry = true;
			break;
		}
	}

	if (hasCarry)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
