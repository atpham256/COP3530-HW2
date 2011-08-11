// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>

using namespace std;

// calculates the nth Fibonacci number recursively
unsigned long long int rFibonacci(int n)
{
	if(n == 0) // base case (0th Fibonacci number = 0)
	{
		return 0;
	}
	else if(n == 1) // base case (1st Fibonacci number = 1)
	{
		return 1;
	}
	else // recursive step
	{
		return rFibonacci(n-1) + rFibonacci(n-2);
	}
}
