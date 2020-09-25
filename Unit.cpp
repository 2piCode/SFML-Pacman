#include "stdafx.h"

void Unit::add(GameComponent* unit) {
	units.push_back(unit);
}

void Unit::move(Map&){}
