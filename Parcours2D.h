#pragma once
#include "Parcours.h"
class Parcours2D : public Parcours
{
	using Parcours::Parcours;
public :
	double calculDistance() override;
	void message() override
};

