// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>

using namespace std;

// calculates the nth Fibonacci number iteratively
unsigned long long int fibonacci(int n)
{
	// declare/intialize variables
	unsigned long long int j = 0, k = 1, fibNum = 0;
	// calculate nth Fibonacci number
	if(n == 0)
	{
		fibNum = 0;
	}
	else if(n == 1)
	{
		fibNum = 1;
	}
	else
	{
		for(int i = 1; i < n; i++)
		{
			fibNum = j + k;
			j = k;
			k = fibNum;
		}
	}
	return fibNum;
}
