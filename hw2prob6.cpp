// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#include <iostream>
#include <fstream>
#include "hw2prob6.h"

using namespace std;
// constructor and default constructor
Hyperplane::Hyperplane(int numOfCoefficients)
{
	n = numOfCoefficients;
	coefficients = new double[n];
}

// copy constructor (deep copy)
Hyperplane::Hyperplane(Hyperplane &original)
{
	n = original.n;
	coefficients = new double[n];
	for(int i = 0; i < n; i++)
	{
		coefficients[i] = original.getVal(i);
	}
}

// operator = overload for Hyperplane
Hyperplane & Hyperplane::operator=(Hyperplane &original)
{
	n = original.n;
	coefficients = new double[n];
	for(int i = 0; i < n; i++)
	{
		coefficients[i] = original.getVal(i);
	}
	return *this;
}
// member functions of Hyperplane
void Hyperplane::setVal(int index, double val)
{
	coefficients[index] = val;
}

double Hyperplane::getVal(int index)
{
	return coefficients[index];
}

void Hyperplane::printHyperplane(ostream& out)
{
	for(int i = 0; i < (n - 1); i++)
	{
		if(i == (n - 2))
		{
			out << coefficients[i] << "x" << i << "=";
		}
		else
		{
			out << coefficients[i] << "x" << i << "+";
		}
	}
	out << coefficients[n-1] << endl;
}

// operator << overload for Hyperplane
ostream& operator<< (ostream &out, Hyperplane &hyperplane)
{
	hyperplane.printHyperplane(out);
	return out;
}

// destructor
Hyperplane::~Hyperplane()
{
	delete [] coefficients;
}

// member functions for Line
double Line::calcSlope()
{
	double x,y, slope;
	y = getVal(0);
	x = getVal(1);
	slope = -(y/x);
	return slope;
}

void Line::printHyperplane(ostream& out)
{
	Hyperplane::printHyperplane(out);
	if (calcSlope() >= 0)
	{
		out << getVal(0) << "/" << getVal(1) << endl;
	}
	else
	{
		out << "-" << getVal(0) << "/" << getVal(1) << endl;
	}
}

// operator << overload for Line
ostream& operator<< (ostream &out, Line &line)
{
	line.printHyperplane(out);
	return out;
}

Line & Line::operator=(Line &original)
{
	int size = 0;
	for(int j = 0; original.getVal(j) != '\0'; j++)
	{
		size++;
	}
	for(int i = 0; i < size; i++)
	{
		setVal(i,original.getVal(i));
	}
	return *this;
}
Line::~Line()
{
	// do not need to deallocate coefficients array because
	// it will be deallocated when base class constructor is called
}
int main()
{
	// declaration of variables
	Hyperplane *l1 = new Line();
	Hyperplane *l2 = new Line();
	ifstream inFile;
	inFile.open("linein.txt");
	ofstream outFile("lineout.txt");
	int value;
	// fill line 1
	for(int i = 0; i < 3; i++)
	{
		inFile >> value;
		l1->setVal(i,value);
	}

	// fill line 2
	for(int i = 0; i < 3; i++)
	{
		inFile >> value;
		l2->setVal(i,value);
	}

	// print lines
	l1->printHyperplane(outFile);
	l2->printHyperplane(outFile);

	// copy line 2 into line 1
	*l1 = *l2;

	// print line 1 again
	l1->printHyperplane(outFile);

	l1->~Hyperplane();
	l2->~Hyperplane();
	inFile.close();
	return 0;
}
