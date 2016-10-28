#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
using namespace std;

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	double getX() const;
	void setX(const double& x);
	double getY() const;
	void setY(const double& y);
	double getWidth() const;
	double getHeight() const;
	void setWidth(const double& width);
	void setHeight(const double& height);
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;
};

#endif