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
			this->btManageLibrary->Location = System::Drawing::Point(155, 48);
			this->btManageLibrary->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btManageLibrary->Name = L"btManageLibrary";
			this->btManageLibrary->Size = System::Drawing::Size(141, 118);
			this->btManageLibrary->TabIndex = 0;
			this->btManageLibrary->Text = L"Manage Library";
			this->btManageLibrary->UseVisualStyleBackColor = true;
			this->btManageLibrary->Click += gcnew System::EventHandler(this, &FormAdmin::btManageLibrary_Click);
			// 
			// btManageBooks
			// 
			this->btManageBooks->Location = System::Drawing::Point(155, 174);
			this->btManageBooks->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btManageBooks->Name = L"btManageBooks";
			this->btManageBooks->Size = System::Drawing::Size(141, 118);
			this->btManageBooks->TabIndex = 1;
			this->btManageBooks->Text = L"Manage Books";
			this->btManageBooks->UseVisualStyleBackColor = true;
			// 
			// btManageUsers
			// 
			this->btManageUsers->Location = System::Drawing::Point(155, 299);
			this->btManageUsers->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btManageUsers->Name = L"btManageUsers";
			this->btManageUsers->Size = System::Drawing::Size(141, 118);
			this->btManageUsers->TabIndex = 2;
			this->btManageUsers->Text = L"Manage Users";
			this->btManageUsers->UseVisualStyleBackColor = true;
			// 
			// FormAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 463);
			this->Controls->Add(this->btManageUsers);
			this->Controls->Add(this->btManageBooks);
			this->Controls->Add(this->btManageLibrary);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FormAdmin";
			this->Text = L"FormAdmin";
			this->Load += gcnew System::EventHandler(this, &FormAdmin::FormAdmin_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btManageLibrary_Click(System::Object^ sender, System::EventArgs^ e) {
		FormLibraryAdmin^ formlibraryadmin = gcnew FormLibraryAdmin;
		formlibraryadmin->ShowDialog();
	}
	private: System::Void FormAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
