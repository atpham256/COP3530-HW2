// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>
#include <time.h>
#include "hw2prob1.h"

using namespace std;

int main()
{
	// declare variables
	int start, end;
	unsigned long long int fibNum;
	// format ouput
	cout << "n" << "\t" << "Fibonacci number" << "\t" << "Iterative" << "\t" << "Recursive" << endl;

	// calculate 10th Fibonacci number and output time
	start = clock();
	fibNum = fibonacci(10);
	end = clock();
	cout << "10" << "\t" << fibNum << "\t\t\t" <<(end - start)/CLOCKS_PER_SEC << " s\t\t";

	start = clock();
	fibNum = rFibonacci(10);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " s" << endl;

	// calculate 20th Fibonacci number and output time
	start = clock();
	fibNum = fibonacci(20);
	end = clock();
	cout << "20" << "\t" << fibNum << "\t\t\t" <<(end - start)/CLOCKS_PER_SEC << " s\t\t";

	start = clock();
	fibNum = rFibonacci(20);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " s" << endl;

	// calculate 30th Fibonacci number and output time
	start = clock();
	fibNum = fibonacci(30);
	end = clock();
	cout << "30" << "\t" << fibNum << "\t\t\t" <<(end - start)/CLOCKS_PER_SEC << " s\t\t";

	start = clock();
	fibNum = rFibonacci(30);
	end = clock();
	cout << (end-start)/CLOCKS_PER_SEC << " s" << endl;

	// calculate the 40th through 50th Fibonacci numbers and output the time
	for(int i = 40; i <= 50; i++)
	{
		start = clock();
		fibNum = fibonacci(i);
		end = clock();
		cout << i << "\t" << fibNum << "\t\t" <<(end - start)/CLOCKS_PER_SEC << " s\t\t";

		start = clock();
		fibNum = rFibonacci(i);
		end = clock();
		cout << (end-start)/CLOCKS_PER_SEC << " s" << endl;
	}

}
