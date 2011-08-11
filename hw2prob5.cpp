#include <iostream>
#include <time.h>
#include <algorithm>
#include "insertionSort.h"

using namespace std;

int main()
{
	int *a = new int[1000000];
	int start = 0, end = 0;

	// best case sort
	for(int i = 0; i < 1000000; i++)
	{
		a[i] = i;
	}

	start = clock();
	sort(a,a+1000000);
	end = clock();

	cout << (end - start)/CLOCKS_PER_SEC << endl;

	// best case insertion
	for(int i = 0; i < 1000000; i++)
	{
		a[i] = i;
	}

	start = clock();
	insertionSort(a,1000000);
	end = clock();

	cout << (end - start)/CLOCKS_PER_SEC << endl;

	// worst case sort
	for(int i = 0; i < 1000000; i++)
	{
		a[i] = 999999 - i;
	}

	start = clock();
	sort(a,a+1000000);
	end = clock();

	cout << (end - start)/CLOCKS_PER_SEC << endl;

	// worst case insertion
	for(int i = 0; i < 1000000; i++)
	{
		a[i] = 999999 - i;
	}

	start = clock();
	insertionSort(a,1000000);
	end = clock();

	cout << (end - start)/CLOCKS_PER_SEC << endl;
	delete [] a;
	a = NULL;
}
