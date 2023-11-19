// Prosit 3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#pragma once
#include <iostream>
#include "Point3D.h"
using namespace std;
void main() {
	int pause;

	Point2D* p1;
	Point2D* p2;
	Point2D* p3;
	Parcours* parcours;

	p1 = new Point2D(0.0, 0.0);
	p2 = new Point2D(1.0, 1.0);
	p1 = new Point2D(2.0, 2.0);
	parcours = new Parcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	delete p1;
	delete p2;
	delete p3;

	cout << parcours->calculDistance() << endl;
	parcours->message();

	delete parcours;

	p1 = new Point3D(0.0, 0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);
	p3 = new Point3D(2.0, 2.0, 2.0);
	parcours = new Parcours3D(3);


	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new Point2D(0.0, 0.0);
	p2 = new Point3D(1.0, 1.0, 1.0);

	delete p1;
	
	(p1 = p2)->afficherCoor();

	std::cin.get();
};
