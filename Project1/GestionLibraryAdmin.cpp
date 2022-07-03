#include "GestionLibraryAdmin.h"

NS_Comp_Svc::GestionLibraryAdmin::GestionLibraryAdmin(void)
{
	this->oCad = gcnew NS_Comp_Data::CAD();
	this->oMapLibraryAdmin = gcnew NS_Comp_Mappage::MapLibraryAdmin();
}

Data::DataSet^ NS_Comp_Svc::GestionLibraryAdmin::selectLibrary(String^ dataTableName)
{
	String^ sql;
	sql = this->oMapLibraryAdmin->SELECT();
	
	return this->oCad->getRows(sql, dataTableName);
}