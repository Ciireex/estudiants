#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase {

private:

	std::string m_cuisine;
	bool m_mobilitatReduida;

public:
	PuntDeInteresRestaurantSolucio();
	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name);
	PuntDeInteresRestaurantSolucio* Clone() { return new PuntDeInteresRestaurantSolucio(*this); }
	unsigned int getColor();
	std::string getCuisine() { return m_cuisine; };
	bool getMobilitatReduida() { return m_mobilitatReduida; };

};