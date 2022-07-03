#pragma once
#include "FormLibraryAdmin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormAdmin
	/// </summary>
	public ref class FormAdmin : public System::Windows::Forms::Form
	{
	public:
		FormAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btManageLibrary;
	protected:
	private: System::Windows::Forms::Button^ btManageBooks;
	private: System::Windows::Forms::Button^ btManageUsers;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btManageLibrary = (gcnew System::Windows::Forms::Button());
			this->btManageBooks = (gcnew System::Windows::Forms::Button());
			this->btManageUsers = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btManageLibrary
			// 
			this->btManageLibrary->Location = System::Drawing::Point(116, 39);
			this->btManageLibrary->Name = L"btManageLibrary";
			this->btManageLibrary->Size = System::Drawing::Size(106, 96);
			this->btManageLibrary->TabIndex = 0;
			this->btManageLibrary->Text = L"Manage Library";
			this->btManageLibrary->UseVisualStyleBackColor = true;
			this->btManageLibrary->Click += gcnew System::EventHandler(this, &FormAdmin::btManageLibrary_Click);
			// 
			// btManageBooks
			// 
			this->btManageBooks->Location = System::Drawing::Point(116, 141);
			this->btManageBooks->Name = L"btManageBooks";
			this->btManageBooks->Size = System::Drawing::Size(106, 96);
			this->btManageBooks->TabIndex = 1;
			this->btManageBooks->Text = L"Manage Books";
			this->btManageBooks->UseVisualStyleBackColor = true;
			// 
			// btManageUsers
			// 
			this->btManageUsers->Location = System::Drawing::Point(116, 243);
			this->btManageUsers->Name = L"btManageUsers";
			this->btManageUsers->Size = System::Drawing::Size(106, 96);
			this->btManageUsers->TabIndex = 2;
			this->btManageUsers->Text = L"Manage Users";
			this->btManageUsers->UseVisualStyleBackColor = true;
			// 
			// FormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 376);
			this->Controls->Add(this->btManageUsers);
			this->Controls->Add(this->btManageBooks);
			this->Controls->Add(this->btManageLibrary);
			this->Name = L"FormAdmin";
			this->Text = L"FormAdmin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btManageLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
		FormLibraryAdmin^ formlibraryadmin = gcnew FormLibraryAdmin;
		formlibraryadmin->ShowDialog();
	}
	};
}
