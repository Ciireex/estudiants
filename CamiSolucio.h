#pragma once

#include "Common.h"
#include <vector>
#include "CamiBase.h"
using namespace std;
class CamiSolucio : public CamiBase {
	public:
		vector<Coordinate> getCamiCoords();
private:
	Coordinate m_coords;
};

