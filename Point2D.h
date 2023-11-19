#pragma once
#include <string>
class Point2D
{
protected:
	static size_t nPoints;
	double x;
	double y ;
	size_t id;
public:
	Point2D();
	Point2D(double x, double y);
	virtual std::string afficherCoor();
	double getX();
	double getY();
};
