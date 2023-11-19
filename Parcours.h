#pragma once
#include "Point3D.h"
#include <iostream>
#include <vector>
#include <cstdint>

class Parcours : public Point2D
{
protected:
    void message(uint16_t ndim);
    std::vector<Point2D*> points;
public:
    Parcours(int);
    void ajouterPoint(Point2D* point);
    virtual double calculDistance() = 0;
    virtual void message() = 0;
};