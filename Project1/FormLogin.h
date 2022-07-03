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
	/// Description r�sum�e de FormLogin
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btAdmin = (gcnew System::Windows::Forms::Button());
			this->btUser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btAdmin
			// 
			this->btAdmin->Location = System::Drawing::Point(81, 137);
			this->btAdmin->Name = L"btAdmin";
			this->btAdmin->Size = System::Drawing::Size(166, 73);
			this->btAdmin->TabIndex = 0;
			this->btAdmin->Text = L"Biblioth�caire";
			this->btAdmin->UseVisualStyleBackColor = true;
			this->btAdmin->Click += gcnew System::EventHandler(this, &FormLogin::btAdmin_Click);
			// 
			// btUser
			// 
			this->btUser->Location = System::Drawing::Point(328, 137);
			this->btUser->Name = L"btUser";
			this->btUser->Size = System::Drawing::Size(166, 73);
			this->btUser->TabIndex = 1;
			this->btUser->Text = L"Lecteur";
			this->btUser->UseVisualStyleBackColor = true;
			this->btUser->Click += gcnew System::EventHandler(this, &FormLogin::btUser_Click);
			// 
			// FormLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(570, 360);
			this->Controls->Add(this->btUser);
			this->Controls->Add(this->btAdmin);
			this->Name = L"FormLogin";
			this->Text = L"FormLogin";
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
	};
}
