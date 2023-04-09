#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE],arr1[SIZE],arr2[SIZE], a = 0, b = 0;
	bool alredyThere;
	//Генерация вервого массива
	for (int i = 0; i < SIZE; )
	{
		alredyThere = false;
		int newRandValue = rand() % 50;

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
	//Генерация второго массива
	for (int i = 0; i < SIZE; )
	{
		alredyThere = false;
		int newRandValue = rand() % 50;

		for (int j = 0; j < i; j++)
		{
			if (arr1[j] == newRandValue)
			{
				alredyThere = true;
			}
		}
		if (!alredyThere)
		{
			arr1[i] = newRandValue;
			i++;
		}
	}
	//Вывод обоих массивов
	cout << "Элементы первого массива" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl<<endl;
	cout << "Элементы второго массива" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr1[i] << '\t';
		
	}
	cout << endl<<endl;
	//Генерация и вывод нового массива 
	for (int i = 0; i < 10; i++)
	{		
			a = arr[i];
			b = arr1[i];
			arr2[i] = a * b;
	}
	cout << "Новый массив" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr2[i] <<'\t';
	}
	cout << endl;

}

