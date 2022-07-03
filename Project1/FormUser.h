#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormUser
	/// </summary>
	public ref class FormUser : public System::Windows::Forms::Form
	{
	public:
		FormUser(void)
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
		~FormUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btManageInfos;
	private: System::Windows::Forms::Button^ btManageBooks;

	protected:


	protected:

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
			this->btManageInfos = (gcnew System::Windows::Forms::Button());
			this->btManageBooks = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btManageInfos
			// 
			this->btManageInfos->Location = System::Drawing::Point(98, 35);
			this->btManageInfos->Name = L"btManageInfos";
			this->btManageInfos->Size = System::Drawing::Size(90, 90);
			this->btManageInfos->TabIndex = 0;
			this->btManageInfos->Text = L"My Informations";
			this->btManageInfos->UseVisualStyleBackColor = true;
			// 
			// btManageBooks
			// 
			this->btManageBooks->Location = System::Drawing::Point(98, 143);
			this->btManageBooks->Name = L"btManageBooks";
			this->btManageBooks->Size = System::Drawing::Size(90, 90);
			this->btManageBooks->TabIndex = 1;
			this->btManageBooks->Text = L"Books";
			this->btManageBooks->UseVisualStyleBackColor = true;
			// 
			// FormUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btManageBooks);
			this->Controls->Add(this->btManageInfos);
			this->Name = L"FormUser";
			this->Text = L"FormUser";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
