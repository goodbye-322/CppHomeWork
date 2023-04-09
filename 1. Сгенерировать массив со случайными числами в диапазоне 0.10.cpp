#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE],a=0,b=0;
	bool alredyThere;

	for (int i = 0; i < SIZE; )
	{
		alredyThere = false;
		int newRandValue = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandValue)
			{
				alredyThere = true;
			}
		}

		if (!alredyThere)
		{
			arr[i] = newRandValue;
			i++;
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}

