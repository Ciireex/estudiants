#include "Common.h"
#include <vector>
#include "CamiSolucio.h"
#include <iostream>
using namespace std;

vector<Coordinate> CamiSolucio::getCamiCoords() {
	
	double m_lat = 41.4928803; /* Habria que averiguar como se cogen estas variables
							   ya que no se pasan por parametro. Ponemos unas por defecto de momento*/
	double m_lon = 2.1452381;

	Coordinate p1;
	p1.lat = m_lat;
	p1.lon = m_lon;

	vector<Coordinate> v;
	v.push_back(p1);
	return v;

}
