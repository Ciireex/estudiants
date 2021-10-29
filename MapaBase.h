#pragma once
#include "pch.h"

#include "Common.h"
#include "PuntDeInteresBase.h"
#include "CamiBase.h"
#include <vector>


class MapaBase {

	public:
		virtual void getPdis(std::vector<PuntDeInteresBase*>&) = 0;
		virtual void getCamins(std::vector<CamiBase*>&) = 0;
		virtual void parsejaXmlElements(std::vector<XmlElement>& xmlElements) = 0;

};

class MapaSolucio : public::MapaBase {

public:
	void getPdis(std::vector<PuntDeInteresBase*>& pdis);

private:

	std::vector<PuntDeInteresBase*> m_PuntsInteres;
	std::vector<CamiBase*> m_Camins;
}



