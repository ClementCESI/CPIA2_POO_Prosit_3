#pragma once
#include "Point2D.h"
class Point3D :	public Point2D
{
protected:
	double z;
public:
	Point3D(double x, double y, double z);
	double getZ();
	std::string afficherCoor() override;
};

