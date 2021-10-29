#pragma once

#include "Common.h"
#include <vector>
#include "CamiSolucio.h"
using namespace std;
vector<Coordinate> CamiSolucio::getCamiCoords() {

	vector<Coordinate> coords;
	coords.push_back(m_coords);
	return coords;

}