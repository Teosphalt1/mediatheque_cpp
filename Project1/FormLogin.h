#pragma once

#include "FormAdmin.h"
#include "FormUser.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormLogin
	/// </summary>
	public ref class FormLogin : public System::Windows::Forms::Form
	{
	public:
		FormLogin(void)
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
		~FormLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btAdmin;
	protected:
	private: System::Windows::Forms::Button^ btUser;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btAdmin = (gcnew System::Windows::Forms::Button());
			this->btUser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btAdmin
			// 
			this->btAdmin->Location = System::Drawing::Point(108, 169);
			this->btAdmin->Margin = System::Windows::Forms::Padding(4);
			this->btAdmin->Name = L"btAdmin";
			this->btAdmin->Size = System::Drawing::Size(221, 90);
			this->btAdmin->TabIndex = 0;
			this->btAdmin->Text = L"Bibliothécaire";
			this->btAdmin->UseVisualStyleBackColor = true;
			this->btAdmin->Click += gcnew System::EventHandler(this, &FormLogin::btAdmin_Click);
			// 
			// btUser
			// 
			this->btUser->Location = System::Drawing::Point(437, 169);
			this->btUser->Margin = System::Windows::Forms::Padding(4);
			this->btUser->Name = L"btUser";
			this->btUser->Size = System::Drawing::Size(221, 90);
			this->btUser->TabIndex = 1;
			this->btUser->Text = L"Lecteur";
			this->btUser->UseVisualStyleBackColor = true;
			this->btUser->Click += gcnew System::EventHandler(this, &FormLogin::btUser_Click);
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(760, 443);
			this->Controls->Add(this->btUser);
			this->Controls->Add(this->btAdmin);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormLogin";
			this->Text = L"FormLogin";
			this->Load += gcnew System::EventHandler(this, &FormLogin::FormLogin_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		FormAdmin^ formadmin = gcnew FormAdmin;
		formadmin->ShowDialog();
	}
	private: System::Void btUser_Click(System::Object^ sender, System::EventArgs^ e) {
		FormUser^ formuser = gcnew FormUser;
		formuser->ShowDialog();
	}
	private: System::Void FormLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
