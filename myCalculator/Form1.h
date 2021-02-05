#pragma once
#include "myMath.h"
#include <string>;
#include "Trigonometry.h"
#include "checkOperator.h";
//#include "stdafx.h"



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace msclr::interop;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grHistory;
	protected:
	private: System::Windows::Forms::TextBox^ txbShow;


	private: System::Windows::Forms::GroupBox^ groupBox1;










	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btnback;

	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDat;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnBeracetClose;

	private: System::Windows::Forms::Button^ btnBracetOpen;

	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::Button^ btnClearAll;

	private: System::Windows::Forms::Button^ btnPow;

	private: System::Windows::Forms::Button^ btnRa;


	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnDiv;


	private: System::Windows::Forms::Button^ btnMuinus;
	private: System::Windows::Forms::Button^ btnMulty;




	private: System::Windows::Forms::Button^ btnEq;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ btnSin;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btnCos;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btnTan;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::ComboBox^ cmbType;


	private: System::Windows::Forms::TextBox^ txbHistory1;
private: System::Windows::Forms::ComboBox^ cmbTan;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grHistory = (gcnew System::Windows::Forms::GroupBox());
			this->txbHistory1 = (gcnew System::Windows::Forms::TextBox());
			this->txbShow = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBeracetClose = (gcnew System::Windows::Forms::Button());
			this->btnBracetOpen = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnClearAll = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnRa = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMuinus = (gcnew System::Windows::Forms::Button());
			this->btnMulty = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDat = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbTan = (gcnew System::Windows::Forms::ComboBox());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->grHistory->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// grHistory
			// 
			this->grHistory->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->grHistory->Controls->Add(this->txbHistory1);
			this->grHistory->Location = System::Drawing::Point(664, 15);
			this->grHistory->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->grHistory->Name = L"grHistory";
			this->grHistory->Padding = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->grHistory->Size = System::Drawing::Size(228, 758);
			this->grHistory->TabIndex = 0;
			this->grHistory->TabStop = false;
			this->grHistory->Text = L"History";
			// 
			// txbHistory1
			// 
			this->txbHistory1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->txbHistory1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbHistory1->Location = System::Drawing::Point(7, 38);
			this->txbHistory1->Multiline = true;
			this->txbHistory1->Name = L"txbHistory1";
			this->txbHistory1->ReadOnly = true;
			this->txbHistory1->Size = System::Drawing::Size(214, 711);
			this->txbHistory1->TabIndex = 0;
			// 
			// txbShow
			// 
			this->txbShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txbShow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbShow->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbShow->Location = System::Drawing::Point(12, 34);
			this->txbShow->Name = L"txbShow";
			this->txbShow->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txbShow->Size = System::Drawing::Size(645, 50);
			this->txbShow->TabIndex = 1;
			this->txbShow->Tag = L"";
			this->txbShow->Text = L"0";
			this->txbShow->Enter += gcnew System::EventHandler(this, &Form1::txbShow_Enter);
			this->txbShow->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::txbShow_KeyDown);
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::Border;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->btnBeracetClose);
			this->groupBox1->Controls->Add(this->btnBracetOpen);
			this->groupBox1->Controls->Add(this->btnClear);
			this->groupBox1->Controls->Add(this->btnClearAll);
			this->groupBox1->Controls->Add(this->btnPow);
			this->groupBox1->Controls->Add(this->btnRa);
			this->groupBox1->Controls->Add(this->btnPlus);
			this->groupBox1->Controls->Add(this->btnDiv);
			this->groupBox1->Controls->Add(this->btnMuinus);
			this->groupBox1->Controls->Add(this->btnMulty);
			this->groupBox1->Controls->Add(this->btnEq);
			this->groupBox1->Controls->Add(this->btnback);
			this->groupBox1->Controls->Add(this->btn0);
			this->groupBox1->Controls->Add(this->btnDat);
			this->groupBox1->Controls->Add(this->btn9);
			this->groupBox1->Controls->Add(this->btn8);
			this->groupBox1->Controls->Add(this->btn7);
			this->groupBox1->Controls->Add(this->btn6);
			this->groupBox1->Controls->Add(this->btn5);
			this->groupBox1->Controls->Add(this->btn4);
			this->groupBox1->Controls->Add(this->btn3);
			this->groupBox1->Controls->Add(this->btn2);
			this->groupBox1->Controls->Add(this->btn1);
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->groupBox1->Location = System::Drawing::Point(12, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(633, 304);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// btnBeracetClose
			// 
			this->btnBeracetClose->BackColor = System::Drawing::Color::Gray;
			this->btnBeracetClose->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBeracetClose->ForeColor = System::Drawing::Color::Black;
			this->btnBeracetClose->Location = System::Drawing::Point(538, 233);
			this->btnBeracetClose->Margin = System::Windows::Forms::Padding(10);
			this->btnBeracetClose->Name = L"btnBeracetClose";
			this->btnBeracetClose->Padding = System::Windows::Forms::Padding(3);
			this->btnBeracetClose->Size = System::Drawing::Size(85, 54);
			this->btnBeracetClose->TabIndex = 23;
			this->btnBeracetClose->Text = L")";
			this->btnBeracetClose->UseVisualStyleBackColor = false;
			this->btnBeracetClose->Click += gcnew System::EventHandler(this, &Form1::btnBeracetClose_Click);
			// 
			// btnBracetOpen
			// 
			this->btnBracetOpen->BackColor = System::Drawing::Color::Gray;
			this->btnBracetOpen->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBracetOpen->ForeColor = System::Drawing::Color::Black;
			this->btnBracetOpen->Location = System::Drawing::Point(538, 159);
			this->btnBracetOpen->Margin = System::Windows::Forms::Padding(10);
			this->btnBracetOpen->Name = L"btnBracetOpen";
			this->btnBracetOpen->Padding = System::Windows::Forms::Padding(3);
			this->btnBracetOpen->Size = System::Drawing::Size(85, 54);
			this->btnBracetOpen->TabIndex = 22;
			this->btnBracetOpen->Text = L"(";
			this->btnBracetOpen->UseVisualStyleBackColor = false;
			this->btnBracetOpen->Click += gcnew System::EventHandler(this, &Form1::btnBracetOpen_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Gray;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::Black;
			this->btnClear->Location = System::Drawing::Point(538, 85);
			this->btnClear->Margin = System::Windows::Forms::Padding(10);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Padding = System::Windows::Forms::Padding(3);
			this->btnClear->Size = System::Drawing::Size(85, 54);
			this->btnClear->TabIndex = 21;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// btnClearAll
			// 
			this->btnClearAll->BackColor = System::Drawing::Color::Gray;
			this->btnClearAll->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClearAll->ForeColor = System::Drawing::Color::Black;
			this->btnClearAll->Location = System::Drawing::Point(538, 11);
			this->btnClearAll->Margin = System::Windows::Forms::Padding(10);
			this->btnClearAll->Name = L"btnClearAll";
			this->btnClearAll->Padding = System::Windows::Forms::Padding(3);
			this->btnClearAll->Size = System::Drawing::Size(85, 54);
			this->btnClearAll->TabIndex = 20;
			this->btnClearAll->Text = L"CE";
			this->btnClearAll->UseVisualStyleBackColor = false;
			this->btnClearAll->Click += gcnew System::EventHandler(this, &Form1::btnClearAll_Click);
			// 
			// btnPow
			// 
			this->btnPow->BackColor = System::Drawing::Color::Gray;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPow->ForeColor = System::Drawing::Color::Black;
			this->btnPow->Location = System::Drawing::Point(433, 233);
			this->btnPow->Margin = System::Windows::Forms::Padding(10);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Padding = System::Windows::Forms::Padding(3);
			this->btnPow->Size = System::Drawing::Size(85, 54);
			this->btnPow->TabIndex = 19;
			this->btnPow->Text = L"x^";
			this->btnPow->UseVisualStyleBackColor = false;
			this->btnPow->Click += gcnew System::EventHandler(this, &Form1::btnPow_Click);
			// 
			// btnRa
			// 
			this->btnRa->BackColor = System::Drawing::Color::Gray;
			this->btnRa->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRa->ForeColor = System::Drawing::Color::Black;
			this->btnRa->Location = System::Drawing::Point(433, 159);
			this->btnRa->Margin = System::Windows::Forms::Padding(10);
			this->btnRa->Name = L"btnRa";
			this->btnRa->Padding = System::Windows::Forms::Padding(3);
			this->btnRa->Size = System::Drawing::Size(85, 54);
			this->btnRa->TabIndex = 17;
			this->btnRa->Text = L"%";
			this->btnRa->UseVisualStyleBackColor = false;
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::Gray;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->ForeColor = System::Drawing::Color::Black;
			this->btnPlus->Location = System::Drawing::Point(328, 159);
			this->btnPlus->Margin = System::Windows::Forms::Padding(10);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Padding = System::Windows::Forms::Padding(3);
			this->btnPlus->Size = System::Drawing::Size(85, 128);
			this->btnPlus->TabIndex = 16;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::btnPlus_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::Gray;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->ForeColor = System::Drawing::Color::Black;
			this->btnDiv->Location = System::Drawing::Point(433, 85);
			this->btnDiv->Margin = System::Windows::Forms::Padding(10);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Padding = System::Windows::Forms::Padding(3);
			this->btnDiv->Size = System::Drawing::Size(85, 54);
			this->btnDiv->TabIndex = 15;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// btnMuinus
			// 
			this->btnMuinus->BackColor = System::Drawing::Color::Gray;
			this->btnMuinus->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMuinus->ForeColor = System::Drawing::Color::Black;
			this->btnMuinus->Location = System::Drawing::Point(328, 85);
			this->btnMuinus->Margin = System::Windows::Forms::Padding(10);
			this->btnMuinus->Name = L"btnMuinus";
			this->btnMuinus->Padding = System::Windows::Forms::Padding(3);
			this->btnMuinus->Size = System::Drawing::Size(85, 54);
			this->btnMuinus->TabIndex = 14;
			this->btnMuinus->Text = L"-";
			this->btnMuinus->UseVisualStyleBackColor = false;
			this->btnMuinus->Click += gcnew System::EventHandler(this, &Form1::btnMuinus_Click);
			// 
			// btnMulty
			// 
			this->btnMulty->BackColor = System::Drawing::Color::Gray;
			this->btnMulty->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulty->ForeColor = System::Drawing::Color::Black;
			this->btnMulty->Location = System::Drawing::Point(433, 11);
			this->btnMulty->Margin = System::Windows::Forms::Padding(10);
			this->btnMulty->Name = L"btnMulty";
			this->btnMulty->Padding = System::Windows::Forms::Padding(3);
			this->btnMulty->Size = System::Drawing::Size(85, 54);
			this->btnMulty->TabIndex = 13;
			this->btnMulty->Text = L"x";
			this->btnMulty->UseVisualStyleBackColor = false;
			this->btnMulty->Click += gcnew System::EventHandler(this, &Form1::btnMulty_Click);
			// 
			// btnEq
			// 
			this->btnEq->BackColor = System::Drawing::Color::Gray;
			this->btnEq->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEq->ForeColor = System::Drawing::Color::Black;
			this->btnEq->Location = System::Drawing::Point(330, 11);
			this->btnEq->Margin = System::Windows::Forms::Padding(10);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Padding = System::Windows::Forms::Padding(3);
			this->btnEq->Size = System::Drawing::Size(85, 54);
			this->btnEq->TabIndex = 12;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = false;
			this->btnEq->Click += gcnew System::EventHandler(this, &Form1::btnEq_Click);
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnback->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnback->ForeColor = System::Drawing::Color::Black;
			this->btnback->Location = System::Drawing::Point(223, 233);
			this->btnback->Margin = System::Windows::Forms::Padding(10);
			this->btnback->Name = L"btnback";
			this->btnback->Padding = System::Windows::Forms::Padding(3);
			this->btnback->Size = System::Drawing::Size(85, 54);
			this->btnback->TabIndex = 11;
			this->btnback->UseVisualStyleBackColor = false;
			this->btnback->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn0->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::Color::Black;
			this->btn0->Location = System::Drawing::Point(118, 233);
			this->btn0->Margin = System::Windows::Forms::Padding(10);
			this->btn0->Name = L"btn0";
			this->btn0->Padding = System::Windows::Forms::Padding(3);
			this->btn0->Size = System::Drawing::Size(85, 54);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnDat
			// 
			this->btnDat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDat->ForeColor = System::Drawing::Color::Black;
			this->btnDat->Location = System::Drawing::Point(13, 233);
			this->btnDat->Margin = System::Windows::Forms::Padding(10);
			this->btnDat->Name = L"btnDat";
			this->btnDat->Padding = System::Windows::Forms::Padding(3, 0, 3, 10);
			this->btnDat->Size = System::Drawing::Size(85, 54);
			this->btnDat->TabIndex = 9;
			this->btnDat->Text = L".";
			this->btnDat->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnDat->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->btnDat->UseVisualStyleBackColor = false;
			this->btnDat->Click += gcnew System::EventHandler(this, &Form1::btnDat_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::Color::Black;
			this->btn9->Location = System::Drawing::Point(223, 159);
			this->btn9->Margin = System::Windows::Forms::Padding(10);
			this->btn9->Name = L"btn9";
			this->btn9->Padding = System::Windows::Forms::Padding(3);
			this->btn9->Size = System::Drawing::Size(85, 54);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::Color::Black;
			this->btn8->Location = System::Drawing::Point(118, 159);
			this->btn8->Margin = System::Windows::Forms::Padding(10);
			this->btn8->Name = L"btn8";
			this->btn8->Padding = System::Windows::Forms::Padding(3);
			this->btn8->Size = System::Drawing::Size(85, 54);
			this->btn8->TabIndex = 7;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::Color::Black;
			this->btn7->Location = System::Drawing::Point(13, 159);
			this->btn7->Margin = System::Windows::Forms::Padding(10);
			this->btn7->Name = L"btn7";
			this->btn7->Padding = System::Windows::Forms::Padding(3);
			this->btn7->Size = System::Drawing::Size(85, 54);
			this->btn7->TabIndex = 6;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::Color::Black;
			this->btn6->Location = System::Drawing::Point(223, 85);
			this->btn6->Margin = System::Windows::Forms::Padding(10);
			this->btn6->Name = L"btn6";
			this->btn6->Padding = System::Windows::Forms::Padding(3);
			this->btn6->Size = System::Drawing::Size(85, 54);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::Color::Black;
			this->btn5->Location = System::Drawing::Point(118, 85);
			this->btn5->Margin = System::Windows::Forms::Padding(10);
			this->btn5->Name = L"btn5";
			this->btn5->Padding = System::Windows::Forms::Padding(3);
			this->btn5->Size = System::Drawing::Size(85, 54);
			this->btn5->TabIndex = 4;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::Color::Black;
			this->btn4->Location = System::Drawing::Point(13, 85);
			this->btn4->Margin = System::Windows::Forms::Padding(10);
			this->btn4->Name = L"btn4";
			this->btn4->Padding = System::Windows::Forms::Padding(3);
			this->btn4->Size = System::Drawing::Size(85, 54);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::Color::Black;
			this->btn3->Location = System::Drawing::Point(223, 11);
			this->btn3->Margin = System::Windows::Forms::Padding(10);
			this->btn3->Name = L"btn3";
			this->btn3->Padding = System::Windows::Forms::Padding(3);
			this->btn3->Size = System::Drawing::Size(85, 54);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::Black;
			this->btn2->Location = System::Drawing::Point(118, 11);
			this->btn2->Margin = System::Windows::Forms::Padding(10);
			this->btn2->Name = L"btn2";
			this->btn2->Padding = System::Windows::Forms::Padding(3);
			this->btn2->Size = System::Drawing::Size(85, 54);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::Black;
			this->btn1->Location = System::Drawing::Point(13, 11);
			this->btn1->Margin = System::Windows::Forms::Padding(10);
			this->btn1->Name = L"btn1";
			this->btn1->Padding = System::Windows::Forms::Padding(3);
			this->btn1->Size = System::Drawing::Size(85, 54);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cmbTan);
			this->groupBox2->Controls->Add(this->cmbType);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button23);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->btnSin);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->btnCos);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->btnTan);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button33);
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button32);
			this->groupBox2->Controls->Add(this->button19);
			this->groupBox2->Controls->Add(this->button31);
			this->groupBox2->Controls->Add(this->button20);
			this->groupBox2->Controls->Add(this->button30);
			this->groupBox2->Controls->Add(this->button21);
			this->groupBox2->Controls->Add(this->button29);
			this->groupBox2->Controls->Add(this->button22);
			this->groupBox2->Controls->Add(this->button28);
			this->groupBox2->Controls->Add(this->button27);
			this->groupBox2->Controls->Add(this->button24);
			this->groupBox2->Controls->Add(this->button26);
			this->groupBox2->Controls->Add(this->button25);
			this->groupBox2->Location = System::Drawing::Point(12, 407);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(633, 366);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// cmbTan
			// 
			this->cmbTan->BackColor = System::Drawing::Color::Gray;
			this->cmbTan->FormattingEnabled = true;
			this->cmbTan->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"tan", L"cot" });
			this->cmbTan->Location = System::Drawing::Point(223, 24);
			this->cmbTan->Name = L"cmbTan";
			this->cmbTan->Size = System::Drawing::Size(85, 38);
			this->cmbTan->TabIndex = 50;
			this->cmbTan->Text = L"tan";
			this->cmbTan->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbTan_SelectedIndexChanged);
			// 
			// cmbType
			// 
			this->cmbType->BackColor = System::Drawing::Color::Gray;
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"DARAJE", L"RADIAN" });
			this->cmbType->Location = System::Drawing::Point(13, 24);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(190, 38);
			this->cmbType->Sorted = true;
			this->cmbType->TabIndex = 49;
			this->cmbType->Text = L"DARAJE";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(538, 295);
			this->button13->Margin = System::Windows::Forms::Padding(10);
			this->button13->Name = L"button13";
			this->button13->Padding = System::Windows::Forms::Padding(3);
			this->button13->Size = System::Drawing::Size(85, 54);
			this->button13->TabIndex = 47;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(433, 73);
			this->button23->Margin = System::Windows::Forms::Padding(10);
			this->button23->Name = L"button23";
			this->button23->Padding = System::Windows::Forms::Padding(3);
			this->button23->Size = System::Drawing::Size(85, 54);
			this->button23->TabIndex = 37;
			this->button23->Text = L"3";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(538, 221);
			this->button14->Margin = System::Windows::Forms::Padding(10);
			this->button14->Name = L"button14";
			this->button14->Padding = System::Windows::Forms::Padding(3);
			this->button14->Size = System::Drawing::Size(85, 54);
			this->button14->TabIndex = 46;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::Color::Gray;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->btnSin->ForeColor = System::Drawing::Color::Black;
			this->btnSin->Location = System::Drawing::Point(13, 75);
			this->btnSin->Margin = System::Windows::Forms::Padding(10);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Padding = System::Windows::Forms::Padding(3);
			this->btnSin->Size = System::Drawing::Size(85, 54);
			this->btnSin->TabIndex = 24;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &Form1::btnSin_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(538, 147);
			this->button15->Margin = System::Windows::Forms::Padding(10);
			this->button15->Name = L"button15";
			this->button15->Padding = System::Windows::Forms::Padding(3);
			this->button15->Size = System::Drawing::Size(85, 54);
			this->button15->TabIndex = 45;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::Color::Gray;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->btnCos->ForeColor = System::Drawing::Color::Black;
			this->btnCos->Location = System::Drawing::Point(118, 75);
			this->btnCos->Margin = System::Windows::Forms::Padding(10);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Padding = System::Windows::Forms::Padding(3);
			this->btnCos->Size = System::Drawing::Size(85, 54);
			this->btnCos->TabIndex = 25;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &Form1::btnCos_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(538, 73);
			this->button16->Margin = System::Windows::Forms::Padding(10);
			this->button16->Name = L"button16";
			this->button16->Padding = System::Windows::Forms::Padding(3);
			this->button16->Size = System::Drawing::Size(85, 54);
			this->button16->TabIndex = 44;
			this->button16->Text = L"3";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::Color::Gray;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->btnTan->ForeColor = System::Drawing::Color::Black;
			this->btnTan->Location = System::Drawing::Point(223, 75);
			this->btnTan->Margin = System::Windows::Forms::Padding(10);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Padding = System::Windows::Forms::Padding(3);
			this->btnTan->Size = System::Drawing::Size(85, 54);
			this->btnTan->TabIndex = 26;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &Form1::btnTan_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button17->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(433, 295);
			this->button17->Margin = System::Windows::Forms::Padding(10);
			this->button17->Name = L"button17";
			this->button17->Padding = System::Windows::Forms::Padding(3);
			this->button17->Size = System::Drawing::Size(85, 54);
			this->button17->TabIndex = 43;
			this->button17->Text = L"6";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Gray;
			this->button33->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(13, 149);
			this->button33->Margin = System::Windows::Forms::Padding(10);
			this->button33->Name = L"button33";
			this->button33->Padding = System::Windows::Forms::Padding(3);
			this->button33->Size = System::Drawing::Size(85, 54);
			this->button33->TabIndex = 27;
			this->button33->Text = L"asin";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(328, 295);
			this->button18->Margin = System::Windows::Forms::Padding(10);
			this->button18->Name = L"button18";
			this->button18->Padding = System::Windows::Forms::Padding(3);
			this->button18->Size = System::Drawing::Size(85, 54);
			this->button18->TabIndex = 42;
			this->button18->Text = L"5";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Gray;
			this->button32->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(118, 149);
			this->button32->Margin = System::Windows::Forms::Padding(10);
			this->button32->Name = L"button32";
			this->button32->Padding = System::Windows::Forms::Padding(3);
			this->button32->Size = System::Drawing::Size(85, 54);
			this->button32->TabIndex = 28;
			this->button32->Text = L"acos";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(433, 221);
			this->button19->Margin = System::Windows::Forms::Padding(10);
			this->button19->Name = L"button19";
			this->button19->Padding = System::Windows::Forms::Padding(3);
			this->button19->Size = System::Drawing::Size(85, 54);
			this->button19->TabIndex = 41;
			this->button19->Text = L"3";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Gray;
			this->button31->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(223, 149);
			this->button31->Margin = System::Windows::Forms::Padding(10);
			this->button31->Name = L"button31";
			this->button31->Padding = System::Windows::Forms::Padding(3);
			this->button31->Size = System::Drawing::Size(85, 54);
			this->button31->TabIndex = 29;
			this->button31->Text = L"atan";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button20->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(328, 221);
			this->button20->Margin = System::Windows::Forms::Padding(10);
			this->button20->Name = L"button20";
			this->button20->Padding = System::Windows::Forms::Padding(3);
			this->button20->Size = System::Drawing::Size(85, 54);
			this->button20->TabIndex = 40;
			this->button20->Text = L"2";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Gray;
			this->button30->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(13, 223);
			this->button30->Margin = System::Windows::Forms::Padding(10);
			this->button30->Name = L"button30";
			this->button30->Padding = System::Windows::Forms::Padding(3);
			this->button30->Size = System::Drawing::Size(85, 54);
			this->button30->TabIndex = 30;
			this->button30->Text = L"sinh";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(433, 147);
			this->button21->Margin = System::Windows::Forms::Padding(10);
			this->button21->Name = L"button21";
			this->button21->Padding = System::Windows::Forms::Padding(3);
			this->button21->Size = System::Drawing::Size(85, 54);
			this->button21->TabIndex = 39;
			this->button21->Text = L"6";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Gray;
			this->button29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(118, 223);
			this->button29->Margin = System::Windows::Forms::Padding(10);
			this->button29->Name = L"button29";
			this->button29->Padding = System::Windows::Forms::Padding(3);
			this->button29->Size = System::Drawing::Size(85, 54);
			this->button29->TabIndex = 31;
			this->button29->Text = L"cosh";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(328, 147);
			this->button22->Margin = System::Windows::Forms::Padding(10);
			this->button22->Name = L"button22";
			this->button22->Padding = System::Windows::Forms::Padding(3);
			this->button22->Size = System::Drawing::Size(85, 54);
			this->button22->TabIndex = 38;
			this->button22->Text = L"5";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Gray;
			this->button28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15, System::Drawing::FontStyle::Bold));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(223, 223);
			this->button28->Margin = System::Windows::Forms::Padding(10);
			this->button28->Name = L"button28";
			this->button28->Padding = System::Windows::Forms::Padding(3);
			this->button28->Size = System::Drawing::Size(85, 54);
			this->button28->TabIndex = 32;
			this->button28->Text = L"tanh";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Gray;
			this->button27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(13, 297);
			this->button27->Margin = System::Windows::Forms::Padding(10);
			this->button27->Name = L"button27";
			this->button27->Padding = System::Windows::Forms::Padding(3, 0, 3, 10);
			this->button27->Size = System::Drawing::Size(85, 54);
			this->button27->TabIndex = 33;
			this->button27->Text = L"asinh";
			this->button27->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button27->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(328, 73);
			this->button24->Margin = System::Windows::Forms::Padding(10);
			this->button24->Name = L"button24";
			this->button24->Padding = System::Windows::Forms::Padding(3);
			this->button24->Size = System::Drawing::Size(85, 54);
			this->button24->TabIndex = 36;
			this->button24->Text = L"2";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Gray;
			this->button26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(118, 297);
			this->button26->Margin = System::Windows::Forms::Padding(10);
			this->button26->Name = L"button26";
			this->button26->Padding = System::Windows::Forms::Padding(3);
			this->button26->Size = System::Drawing::Size(85, 54);
			this->button26->TabIndex = 34;
			this->button26->Text = L"acosh";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Gray;
			this->button25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(223, 297);
			this->button25->Margin = System::Windows::Forms::Padding(10);
			this->button25->Name = L"button25";
			this->button25->Padding = System::Windows::Forms::Padding(3);
			this->button25->Size = System::Drawing::Size(85, 54);
			this->button25->TabIndex = 35;
			this->button25->Text = L"atanh";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(905, 776);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txbShow);
			this->Controls->Add(this->grHistory);
			this->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->grHistory->ResumeLayout(false);
			this->grHistory->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void key(Keys a)
	{
		switch (a)
		{
		case Keys::NumPad0:txbShow->Text += "0";
				break;
		case Keys::NumPad1:txbShow->Text += "1";
			break;
		case Keys::NumPad2:txbShow->Text += "2";
			break;
		case Keys::NumPad3:txbShow->Text += "3";
			break;
		case Keys::NumPad4:txbShow->Text += "4";
			break;
		case Keys::NumPad5:txbShow->Text += "5";
			break;
		case Keys::NumPad6:txbShow->Text += "6";
			break;
		case Keys::NumPad7:txbShow->Text += "6";
			break;
		case Keys::NumPad8:txbShow->Text += "7";
			break;
		case Keys::NumPad9:txbShow->Text += "8";
			break;
		case Keys::OemMinus:txbShow->Text += "-";
			break;
		case Keys::Oemplus :txbShow->Text += "+";
			break;
		}
	}
private: System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	/*key(e->KeyCode);*/
}
private: System::Void txbShow_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	//key(e->KeyCode);
	if (e->KeyCode == Keys::Enter)
	{
		btnEq_Click(sender, e);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		txbShow->Text = txbShow->Text->Remove(txbShow->Text->Length - 1, 1);
	}
	catch (...)
	{
	}
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "+";
}
	   string toStandardString(System::String^ string)
	   {
		   using System::Runtime::InteropServices::Marshal;
		   System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		   char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		   std::string returnString(charPointer, string->Length);
		   Marshal::FreeHGlobal(pointer);
		   return returnString;
	   }
private: System::Void btnEq_Click(System::Object^ sender, System::EventArgs^ e) {

	/*msclr::interop::marshal_context context;
	std::string text = context.marshal_as<std::string>(txbShow->Text);*/
	MyMath math;
	checkOperator getNumbers;
	string res = getNumbers.getNumber(toStandardString(txbShow->Text));
	String^ str = gcnew String(res.c_str());
	txbHistory1->Text += txbShow->Text + " = " + str + "\r\n";
	txbShow->Text = str;
}

private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "7";
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "1";
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "2";
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "3";
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "4";
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "5";
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "6";
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "8";
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "9";
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "0";
}
private: System::Void btnDat_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += ".";
}
private: System::Void btnMuinus_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "-";
}
private: System::Void btnMulty_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "*";
}
private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "/";
}
private: System::Void btnBracetOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "(";
}
private: System::Void btnBeracetClose_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += ")";
}
private: System::Void btnClearAll_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text = "0";
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txbShow_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void btnPow_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "^";
}
private: System::Void btnSin_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "sin(";
}
private: System::Void btnCos_Click(System::Object^ sender, System::EventArgs^ e) {
	txbShow->Text += "cos(";
}
private: System::Void btnTan_Click(System::Object^ sender, System::EventArgs^ e) {

	if (cmbTan->Text == "tan")
	{
		txbShow->Text += "tan(";
	}
	else
	{
		txbShow->Text += "cot(";
	}
}
private: System::Void cmbTan_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
