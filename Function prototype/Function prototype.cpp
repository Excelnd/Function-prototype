#include "stdafx.h"
#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main()
{
	int i;
	do {
		cout << "Please, enter number ( 0 and exit): ";
		cin >> i;
		odd(i);
	} while (i != 0);

	return 0;
}

void odd(int x)
{
	if ((x % 2) != 0) cout << "Its is odd. \n";
	else even(x);
}

void even(int x)
{
	if ((x % 1) == 0) cout << "Its is even.\n";
	else odd(x);
}