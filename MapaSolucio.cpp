#pragma once

#include "Common.h"
#include <vector>
#include "MapaBase.h"

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& pdis) {

	for (int i = 0; i < m_PuntsInteres.size(); i++)
	{
		pdis.push_back(m_PuntsInteres[i]->Clone());
	}
}