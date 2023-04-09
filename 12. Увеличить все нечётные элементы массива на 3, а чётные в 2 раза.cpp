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
	cout << "Изменненные значения" << endl;
	for (int i = 0; i < 10; i++)
	{
		if(arr[i]%2!=0)
		{
			a = arr[i]+3;
			
			arr[i] = a;
		}
		else
		{
			b = arr[i]*2;
			
			arr[i] = b;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}


}

