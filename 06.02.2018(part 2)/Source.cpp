#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "PROTO.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода ";
		cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*Даны первый член и знаменатель геометрической прогрессии. Написать рекурсивную функцию: 
a.	нахождения n-го члена прогрессии
b.	нахождения суммы n первых членов прогрессии
*/
		int N = 3;
		int differ = 7;
		int first = 1;
		cout << member(first, differ, N - 1) << endl;
		cout << summa(first, differ, N - 1) << endl;

		}
		else if (nz == 2)
		{
			/*Написать рекурсивную функцию для вычисления максимального элемента массива из n элементов*/
			int arr[] = { 6, 7, 3, 4, -16, 2 };
			cout << FindMax(arr, sizeof(arr) / sizeof(int));
			
		}
		else if (nz == 3)
		{
			/*Написать рекурсивную функцию для вычисления индекса максимального элемента массива из n элементов*/
			int arr[] = { 6, 7, 3, 4, -16, 2 };
			cout << FindMax(arr, sizeof(arr) / sizeof(int));
		}
		else if (nz == 4)
		{
			/*Дан массив целых чисел A. Найти суммы положительных и отрицательных элементов массива, используя функцию определения суммы*/
			const int n = 10, m = 20;
			int X[n], Y[m], sum = 0, count = 0;

			for (int i = 0; i < n; i++) {
				X[i] = rand() % 100 - 50;
				cout << X[i] << " ";
				if (X[i] > 0) {
					sum += X[i];
				}
			}
			cout << "\n \n";

			for (int j = 0; j < m; j++) {
				Y[j] = rand() % 100 - 50;
				cout << Y[j] << " ";
			}
			cout << "\n \n";
		}
		else if (nz == 5)
		{
			/*Даны два натуральных числа. Найти наименьшее общее кратное этих чисел, используя функцию реализующую алгоритм Евклида.*/
			int a=5, b=9;
			cout << gcd(a, b);
		}
		else
		{
			cout << "Такого задания не существует \n";
		}
	}
}