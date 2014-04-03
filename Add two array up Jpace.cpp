// Add two array up Jpace.cpp : Defines the entry point for the console application.
// February 19 2014
// Ja'Keishewa Pace
#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10], b[10], c[10];
	int i, sum;
	for(i = 0; i < 10; i++)
	{
		cout << "Enter the next value for a" << endl;
		cin	>> a[i];
		cout << "Enter the next value for b" << endl;
		cin >> b[i];
		c[i] = a[i] + b[i];
	}
	sum = 0;
	for(i = 0; i < 10; i++)
	{
		sum = sum + c[i];
		cout << "Display c:" << c[i] << endl;
	}
	system("pause");
	return 0;
}

