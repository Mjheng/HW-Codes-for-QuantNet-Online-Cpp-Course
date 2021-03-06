//Point.cpp
//Simple two-dimentional point with x and y coordinates
//09-17-2016 PM
#ifndef POINT_H
#define POINT_H
#include "Point.h"
#endif
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
#include <cmath>

//Constructors and Dectructors
Point::Point(double x, double y)
{
	m_x=x; m_y=y;//Set the x- and y- coordinates 
}

//Selectors
double Point::X()//Access x value
{
	return m_x;
}
double Point::Y()//Access y value
{
	return m_y;
}

//Modifiers
void Point::X(double newxval)//Initiate m_x
{
	m_x=newxval;
}
void Point::Y(double newyval)//Initiate m_y
{
	m_y=newyval;
}

//Description
std::string Point::ToString()
{
	std::stringstream m_string;
	m_string<<"Point("<<m_x<<","<<m_y<<")";
	return m_string.str();
}

//Distance functions
double Point::Distance()
{
	return sqrt(m_x*m_x+m_y*m_y);//Distance to Origin=SquareRoot(x^2+y^2)
}
double Point::Distance(Point &p)//Call by reference
{
	double a,b;
	a=m_x-p.X();//Calculate the difference in x coordinates
	b=m_y-p.Y();//Calculate the difference in y coordinates
	return sqrt(a*a+b*b);
}