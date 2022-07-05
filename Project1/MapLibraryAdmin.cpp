#pragma once
#include "MapLibraryAdmin.h"

String^ NS_Comp_Mappage::MapLibraryAdmin::SELECT(void)
{
	return "SELECT * FROM libraries where id = 5";
}


void NS_Comp_Mappage::MapLibraryAdmin::setId(int id)
{
	this->id = id;
}
void NS_Comp_Mappage::MapLibraryAdmin::setCity(String^ city)
{
	this->city = city;
}

String^ NS_Comp_Mappage::MapLibraryAdmin::getCity(void) { return this->city; }
int NS_Comp_Mappage::MapLibraryAdmin::getId(void) { return this->id; }