#include <iostream>
#include "Rectangle.h"
using namespace std;

double Rectangle2D::getX() const
{
	return x;
}

double Rectangle2D::getY() const
{
	return y;
}

void Rectangle2D::setX(const double& x)
{
	this->x = x;
}

void Rectangle2D::setY(const double& y)
{
	this->y = y;
}

double Rectangle2D::getWidth() const
{
	return width;
}

double Rectangle2D::getHeight() const
{
	return height;
}

void Rectangle2D::setWidth(const double& width)
{
	this->width = width;
}

void Rectangle2D::setHeight(const double& height)
{
	this->height = height;
}

Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}
// All of the above was very simple and straightforward: set it up to output, input something, or compute something. 
// The this-> command was incredibly helpful for all of it, making things fairly easy to keep track of.

Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

double Rectangle2D::getArea() const
{
	double area = width*height;
	return area;
}

double Rectangle2D::getPerimeter() const
{
	double perimeter = (2 * width) + (2 * height);
	return perimeter;
}

// It was here where things got difficult.
// The question: How do I set this up so that I can tell when something is inside an imaginary rectangle with only the information given?
// My solution: Set up the boundaries of each rectangle by finding out how far an x or y coordinate could go before it's outside of the rectangle
bool Rectangle2D::contains(double x, double y) const
{
	double minX = this->x - (width / 2);
	double maxX = this->x + (width / 2);
	double minY = this->y - (height / 2);
	double maxY = this->y + (height / 2);
	if (minX <= x && x <= maxX && minY <= y && y <= maxY)
		return true;
	else
		return false;
}

// These last two took way too long to finish, as I didn't realize it was going for a "pass-by reference" and not a straight up pointer.
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	double minX = this->x - (width / 2);
	double maxX = this->x + (width / 2);
	double minY = this->y - (height / 2);
	double maxY = this->y + (height / 2);
	double ptrMinX = r.x - (width / 2);
	double ptrMaxX = r.x + (width / 2);
	double ptrMinY = r.y - (height / 2);
	double ptrMaxY = r.y + (height / 2);
	if (minX <= ptrMinX && ptrMaxX <= maxX && minY <= ptrMinY && ptrMaxY <= maxY)
		return true;
	else
		return false;
}

// This one checks if any of the corners or any of the sides of the rectangle overlap the original, hence the long "if" statement.
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	double minX = this->x - (width / 2);
	double maxX = this->x + (width / 2);
	double minY = this->y - (height / 2);
	double maxY = this->y + (height / 2);
	double ptrMinX = r.x - (width / 2);
	double ptrMaxX = r.x + (width / 2);
	double ptrMinY = r.y - (height / 2);
	double ptrMaxY = r.y + (height / 2);
	if ((minX <= ptrMinX && minY <= ptrMinY) || (ptrMaxX <= maxX  && ptrMaxY <= maxY) || (minX <= ptrMinX  && ptrMaxY <= maxY) || (ptrMaxX <= maxX  && minY <= ptrMinY) || minX <= ptrMinX || ptrMaxX <= maxX || minY <= ptrMinY || ptrMaxY <= maxY)
		return true;
	else
		return false;
}