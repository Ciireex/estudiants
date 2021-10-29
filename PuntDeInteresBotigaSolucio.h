#pragma once

#include <string>
#include "Common.h"
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase {

private:
	std::string m_tagShop;

public:
	PuntDeInteresBotigaSolucio() {
		m_tagShop = " ";
	}
		
	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name) {
		PuntDeInteresBase(coord, name);
	}
	PuntDeInteresBotigaSolucio* Clone() { return new PuntDeInteresBotigaSolucio(*this); }
	unsigned int getColor();
	std::string getTagShop() { return m_tagShop; };

};