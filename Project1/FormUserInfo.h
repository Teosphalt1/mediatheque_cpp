#pragma once
#include "GestionUserInfo.h"

#include <iostream>
#include <string>
using namespace std;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormUserInfo
	/// </summary>
	public ref class FormUserInfo : public System::Windows::Forms::Form
	{
	public:
		FormUserInfo(void)
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
		~FormUserInfo()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ TB_city;
	private: System::Windows::Forms::TextBox^ TB_mail;
	private: System::Windows::Forms::TextBox^ TB_PWD;
	private: System::Windows::Forms::TextBox^ TB_id_librairies;
	private: System::Windows::Forms::TextBox^ TB_R;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: NS_Comp_Svc_user::GestionUserInfo^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;

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
			this->TB_city = (gcnew System::Windows::Forms::TextBox());
			this->TB_mail = (gcnew System::Windows::Forms::TextBox());
		
			this->TB_id_librairies = (gcnew System::Windows::Forms::TextBox());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TB_mail
			// 
			this->TB_mail->Location = System::Drawing::Point(12, 53);
			this->TB_mail->Name = L"TB_mail";
			this->TB_mail->Size = System::Drawing::Size(329, 22);
			this->TB_mail->TabIndex = 1;
			// 
			// TB_city
			// 
			this->TB_city->Location = System::Drawing::Point(12, 136);
			this->TB_city->Name = L"TB_city";
			this->TB_city->Size = System::Drawing::Size(329, 22);
			this->TB_city->TabIndex = 0;
			// 
			// TB_id_librairies
			// 
			this->TB_id_librairies->Location = System::Drawing::Point(12, 212);
			this->TB_id_librairies->Name = L"TB_id_librairies";
			this->TB_id_librairies->Size = System::Drawing::Size(329, 22);
			this->TB_id_librairies->TabIndex = 3;
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(510, 437);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(125, 47);
			this->btn_update->TabIndex = 4;
			this->btn_update->Text = L"Mettre à jour";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &FormUserInfo::btn_update_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Last Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Mail";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Role";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(510, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 58);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Charger données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormUserInfo::btn_load_Click);
			// 
			// FormUserInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 518);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->TB_id_librairies);
			this->Controls->Add(this->TB_mail);
			this->Controls->Add(this->TB_city);
			this->Name = L"FormUserInfo";
			this->Text = L"FormUserInfo";
			this->Load += gcnew System::EventHandler(this, &FormUserInfo::btn_load_Click);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->TB_mail->Clear();
		this->TB_city->Clear();
		this->TB_id_librairies->Clear();

		this->oSvc = gcnew NS_Comp_Svc_user::GestionUserInfo();
		this->oDs = this->oSvc->selectInfo("RSL");

		DataTable^ x = this->oDs->Tables["RSL"];
		DataRow^ y = x->Rows[0];

		this->TB_mail->AppendText(y["mail"]->ToString());
		this->TB_city->AppendText(y["mail"]->ToString());
		this->TB_id_librairies->AppendText(y["id_librairies"]->ToString());
	};
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int stoi(String ^ s);
		int z = 5;
		System::String^ str = this->TB_city->Text;
		int ye = stoi(this->TB_city->Text);
		/*String^ a = this->TB_mail->Text;
		String^ b = this->TB_city->Text;
		String^ c = this->TB_id_librairies->Text;*/

		this->oSvc->update(z, this->TB_mail->Text, this->TB_city->Text, ye);
	};

	};
}
