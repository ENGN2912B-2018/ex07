#ifndef POINT_H
#define POINT_H

#include <iostream>

class point
{
public:
	// constructors
	point();
	//point(double ptx, double pty);				// using assignment
	point(double ptx, double pty) : x(ptx), y(pty) {}; // using initializers
	
	// accessor functions
	double getx() const {return x;}
	double gety() const {return y;}

	// mutator functions
	void setx(double v){x = v;}
	void sety(double v){y = v;}

	// operator overloading
	point operator+ (const point& p) const;
	friend std::ostream& operator<< (std::ostream& out, const point& p);

    // unary increment/decrement operators (prefix)
	point& operator-- () const;
	point& operator++ () const;

    // unary increment/decrement operators (postfix)
	point operator-- (int) const;
	point operator++ (int) const;

    // overloaded ostream operator (friend function)
	friend std::ostream& operator<< (std::ostream& out, const point& p);

private:
	// internal variables
	double x, y;
};

#endif /* POINT_H */

