#include "Niveau.h"
#include <string>

using namespace std;

int Niveau::getIndexCarte(Point2D position)
{
	return 0;
}

Niveau::Niveau(int* carte, std::string nomCreature, Point2D positionDepart)
{
}

Niveau::~Niveau()
{
}

int* Niveau::getCarte()
{
	return nullptr;
}

std::string Niveau::getNomCreature()
{
	
}

void Niveau::getDeplacementPossible(bool* tabDeplacements)
{
}

void Niveau::deplacerCreature(constantes::Direction direction)
{
}
