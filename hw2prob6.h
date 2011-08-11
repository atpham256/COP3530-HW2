// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

#ifndef HW2PROB6_H
#define HW2PROB6_H

#include <iostream>
#include <fstream>
using namespace std;
// declaration of Hyperplane class
class Hyperplane
{
private:
	int n; // number of coefficients
	double *coefficients; // array of coefficients
public:
	// constructors
	Hyperplane(int numOfCoefficients = 3); // constructor and default constructor
	Hyperplane(Hyperplane &original); // copy constructor
	// member functions
	void setVal(int index, double val);
	double getVal(int index);
	virtual void printHyperplane(ostream &out);
	virtual Hyperplane & operator=(Hyperplane &original);
	// destructor
	virtual ~Hyperplane();

};


// declaration of Line class
class Line : public Hyperplane
{
private:
	// no private members
public:
	// member functions
	double calcSlope();
	void printHyperplane(ostream &out);
	Line & operator=(Line &original);
	~Line();

};
#endif
