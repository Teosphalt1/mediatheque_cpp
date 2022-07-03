#pragma once
#include "MapLibraryAdmin.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class GestionLibraryAdmin
	{
	private:
		NS_Comp_Data::CAD^ oCad;
		NS_Comp_Mappage::MapLibraryAdmin^ oMapLibraryAdmin;

	public:
		GestionLibraryAdmin(void);
		/*~GestionLibraryAdmin(); */

		Data::DataSet^ selectLibrary(String^);
	};
}