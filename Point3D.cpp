#pragma once
#include "Point3D.h"

Point3D::Point3D(double x, double y, double z) {
	Point2D::Point2D(x, y);
	this->z = z;
	this->id += 2;
	this->nPoints = 3;
}

double Point3D::getZ() {
	return(this->z);
}

std::string Point3D::afficherCoor() {
	std::string txt = "Le point num�ros";
	txt += std::to_string(this->nPoints);
	txt += " a pour coordonn�e x : ";
	txt += std::to_string(this->x);
	txt += ", y : ";
	txt += std::to_string(this->y);
	txt += "et z : ";
	txt += std::to_string(this->z);
	txt += "\n";
	return (txt);
};