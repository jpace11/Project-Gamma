// Sum of 1D Jpace.cpp : Defines the entry point for the console application.
// February 19 2014
// Ja'Keishewa Pace
#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10], b[10], c[10];
	int i;
	for(i = 0; i < 10; i++)
	{
		c[i] = 0;
		a[i] = 0;
		b[i] = 0;
	}
	for(i = 0; i < 10; i++)
	{
		cout << "Enter a value for a" << endl;
		cin >> a[i];
		cout << "Enter a value for b" << endl;
		cin >> b[i];
	}
	for(i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i = 0; i < 10; i++)
	{
		cout << "Display c:" << c[i] << endl;		
		cout << "Display a:" << a[i] << endl;
		cout << "Display b:" << b[i] << endl;
	}
	system("pause");
	return 0;
}

