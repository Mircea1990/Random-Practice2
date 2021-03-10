#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int x = 2; 
	int y = 5;

	int* pointer = nullptr;
	pointer = &x;

	printf("%p\n", pointer);
	printf("%d\n", *pointer);
	pointer++;
	
	cout << pointer << endl;

	double q = double(x) + double(y);
	printf("%f\n", q);

	double* pointer2 = &q;
	cout << *pointer2 << endl;

	int* p = pointer - 2;
	cout << p << endl;

	cout << pointer - p << endl;

	pointer--;

	cout << pointer << endl;

	int** w = &pointer;
	cout << *w << endl;
	cout << **w << endl;

	
}