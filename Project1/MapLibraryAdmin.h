#pragma once
#include "pch.h"
#include "Map.h"

namespace NS_Comp_Mappage
{
	ref class MapLibraryAdmin : public Map
	{
	private:
		int id;
		String^ city;

	public:
		virtual String^ SELECT(void) override;
		//virtual String^ INSERT(void) override;
		//virtual String^ DELETE(void) override;
		//virtual String^ UPDATE(void) override;
		
		void setId(int);
		void setCity(String^);
		
		int getId(void);
		String^ getCity(void);
	};
}