#pragma once
#include "Point2D.h"
#include <string>;
 
Point2D::Point2D() {
	this->x = 0;
	this->y = 0;
	this->nPoints = 2;
	this->id += 2;
}


Point2D::Point2D(double x, double y) {
	this->x = x;
	this->y = y;
	this->nPoints += 1;
	this->id += 2;
}

double Point2D::getX() {
	return(this->x);
}

double Point2D::getY() {
	return(this->y);
}

std::string Point2D::afficherCoor() {
	std::string txt = "Le point numéros ";
	txt += std::to_string(this->nPoints);
	txt += " a pour coordonnée x : ";
	txt += std::to_string(this->x);
	txt += "et y : ";
	txt += std::to_string(this->y);
	txt += "\n";
	return (txt);
};
