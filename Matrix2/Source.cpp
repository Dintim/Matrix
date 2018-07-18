#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{

	srand(time(NULL));

	int num;
	cout << "case number: ";
	cin >> num;

	switch (num)
	{
	case 1:
	{
		//1.	*Написать программу, которая заменяет все нули в двухмерном массиве на -1.
		int a[4][5] = { { 4,5,9,0,1 },{ 1,0,2,3,8 },{ 10,7,6,0,4 },{ 0,21,5,1,0 } };

		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j<5; j++)
				cout << setw(5) << a[i][j];
			cout << endl;
		}

		cout << "changed matrix: " << endl;
		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j<5; j++)
			{
				if (a[i][j] == 0)
					a[i][j] = -1;

				cout << setw(5) << a[i][j];
			}
			cout << endl;
		}
	}
	break;

	case 2:
	{
		//2.	***Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
		//Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
		//Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
		const int n = 4, m = 5;
		int a[n][m];
		int b[n][m];

		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<m; j++)
			{
				a[i][j] = 0 + rand() % 30;
				cout << setw(5) << a[i][j];
			}
			cout << endl;
		}

		int k, dir;
		cout << "choose count of steps: ";
		cin >> k;
		cout << "choose direction (1-left, 2-right, 3-up, 4-down): ";
		cin >> dir;

		switch (dir)
		{
		case 1:
		{
			//left
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
				{
					if (j - k >= 0)
						b[i][j - k] = a[i][j];
					else
						b[i][abs(m - k + j)] = a[i][j];
				}
			}

			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
					cout << setw(5) << b[i][j];
				cout << endl;
			}
		}
		break;

		case 2:
		{
			//right
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
				{
					if (j + k<m)
						b[i][j + k] = a[i][j];
					else
						b[i][abs(m - k - j)] = a[i][j];
				}
			}

			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
					cout << setw(5) << b[i][j];
				cout << endl;
			}
		}
		break;

		case 3:
		{
			//up
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
				{
					if (i - k >= 0)
						b[i - k][j] = a[i][j];
					else
						b[abs(n - k + i)][j] = a[i][j];
				}
			}

			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
					cout << setw(5) << b[i][j];
				cout << endl;
			}
		}
		break;

		case 4:
		{
			//down
			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
				{
					if (i + k<n)
						b[i + k][j] = a[i][j];
					else
						b[abs(n - k - i)][j] = a[i][j];
				}
			}

			for (int i = 0; i<n; i++)
			{
				for (int j = 0; j<m; j++)
					cout << setw(5) << b[i][j];
				cout << endl;
			}
		}
		break;
		}



	}
	break;

	case 3:
	{
		//3.	**Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
		//Выполните сортировку элементов в каждой строке массива. Полученный результат покажите на экран.
		int a[4][6];

		for (int i = 0; i<4;i++)
		{
			for (int j = 0; j<6; j++)
			{
				a[i][j] = 0 + rand() % 50;
				cout << setw(5) << a[i][j];
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i<4; i++)
		{
			for (int j = 0; j<5; j++)
			{
				for (int k = 0; k<5; k++)
				{
					if (a[i][k]>a[i][k + 1])
						swap(a[i][k], a[i][k + 1]);
				}
			}
		}

		cout << "sorted: " << endl;
		for (int i = 0; i<4;i++)
		{
			for (int j = 0; j<6; j++)
				cout << setw(5) << a[i][j];
			cout << endl;
		}
	}
	break;


	}


	return 0;
}
