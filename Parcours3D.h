#pragma once
#include "Parcours.h"

class Parcours3D : public Parcours
{
	using Parcours::Parcours;
public:
	double calculDistance() override;
	void message() override;
};
