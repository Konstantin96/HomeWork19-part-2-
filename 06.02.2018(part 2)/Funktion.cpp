#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdarg.h>
#
using namespace std;

unsigned i, j;

int member(int memb, int dif, int n)
{
	if (n) memb = dif + member(memb, dif, n - 1);
	return memb;
}

int summa(int sum, int dif, int n)
{
	if (n) sum += (n*dif) + summa(sum, dif, n - 1);
	return sum;
}

int FindMax(int* arr, int arrSize, int currPos = 0)
{
	if (currPos >= arrSize)
		return 0;
	int temp = FindMax(arr, arrSize, currPos + 1);
	return(arr[temp] > arr[currPos] ? temp : currPos);
}

int gcd(int a, int b) {
	while (b) b ^= a ^= b ^= a %= b;;
	return a;
}