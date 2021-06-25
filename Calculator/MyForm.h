#pragma once

#include <iostream>

using namespace std;

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainScreen;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ backSpaceButton;

	private: System::Windows::Forms::Label^ secScreen;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainScreen = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->backSpaceButton = (gcnew System::Windows::Forms::Button());
			this->secScreen = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// mainScreen
			// 
			this->mainScreen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->mainScreen->BackColor = System::Drawing::Color::Transparent;
			this->mainScreen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mainScreen->Font = (gcnew System::Drawing::Font(L"Bell MT", 27.84906F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainScreen->ForeColor = System::Drawing::Color::White;
			this->mainScreen->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->mainScreen->Location = System::Drawing::Point(17, 46);
			this->mainScreen->Name = L"mainScreen";
			this->mainScreen->Size = System::Drawing::Size(386, 52);
			this->mainScreen->TabIndex = 0;
			this->mainScreen->Text = L"0";
			this->mainScreen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button1->Location = System::Drawing::Point(12, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button2->Location = System::Drawing::Point(68, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button3->Location = System::Drawing::Point(124, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 1;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button4->Location = System::Drawing::Point(180, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 1;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button5->Location = System::Drawing::Point(12, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 1;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button6->Location = System::Drawing::Point(68, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 1;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button7->Location = System::Drawing::Point(124, 157);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 1;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button8->Location = System::Drawing::Point(236, 101);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 1;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button9->Location = System::Drawing::Point(12, 213);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 1;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button10->Location = System::Drawing::Point(68, 213);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 1;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button11->Location = System::Drawing::Point(124, 213);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 1;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button12->Location = System::Drawing::Point(180, 213);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 1;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Bell MT", 25.13208F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button13->Location = System::Drawing::Point(12, 269);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(106, 50);
			this->button13->TabIndex = 1;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::num);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button14->Location = System::Drawing::Point(124, 269);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 1;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button15->Location = System::Drawing::Point(348, 157);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 1;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button16->Location = System::Drawing::Point(236, 213);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 1;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::op);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button17->Location = System::Drawing::Point(348, 272);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 1;
			this->button17->Text = L"X";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button22
			// 
			this->button22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button22->Location = System::Drawing::Point(180, 157);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(106, 50);
			this->button22->TabIndex = 1;
			this->button22->Text = L"+/-";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button23->Location = System::Drawing::Point(292, 157);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 50);
			this->button23->TabIndex = 1;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->button24->Location = System::Drawing::Point(292, 213);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(106, 50);
			this->button24->TabIndex = 1;
			this->button24->Text = L"CE";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// backSpaceButton
			// 
			this->backSpaceButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->backSpaceButton->BackColor = System::Drawing::Color::Transparent;
			this->backSpaceButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->backSpaceButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backSpaceButton->FlatAppearance->BorderSize = 0;
			this->backSpaceButton->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->backSpaceButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->backSpaceButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->backSpaceButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backSpaceButton->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backSpaceButton->ForeColor = System::Drawing::Color::White;
			this->backSpaceButton->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->backSpaceButton->Location = System::Drawing::Point(292, 101);
			this->backSpaceButton->Name = L"backSpaceButton";
			this->backSpaceButton->Size = System::Drawing::Size(105, 50);
			this->backSpaceButton->TabIndex = 1;
			this->backSpaceButton->Text = L"<--";
			this->backSpaceButton->UseVisualStyleBackColor = false;
			this->backSpaceButton->Click += gcnew System::EventHandler(this, &MyForm::backSpaceButton_Click);
			// 
			// secScreen
			// 
			this->secScreen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->secScreen->BackColor = System::Drawing::Color::Transparent;
			this->secScreen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->secScreen->Font = (gcnew System::Drawing::Font(L"Bell MT", 23.77358F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secScreen->ForeColor = System::Drawing::Color::White;
			this->secScreen->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->secScreen->Location = System::Drawing::Point(17, 11);
			this->secScreen->Name = L"secScreen";
			this->secScreen->Size = System::Drawing::Size(386, 35);
			this->secScreen->TabIndex = 0;
			this->secScreen->Text = L"0";
			this->secScreen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(409, 330);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->backSpaceButton);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->secScreen);
			this->Controls->Add(this->mainScreen);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Opacity = 0.7;
			this->RightToLeftLayout = true;
			this->Text = L"Osama\'s Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		double FN;
		double SN;
		double R;
		String^ OP;
	private: System::Void num(System::Object^ sender, System::EventArgs^ e) {
		Button^ numbers = safe_cast<Button^>(sender);
		if (mainScreen->Text == "0")
		{
			mainScreen->Text = numbers->Text;
		}
		else
		{
			mainScreen->Text = mainScreen->Text + numbers->Text;
		}
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!mainScreen->Text->Contains("."))
		{
			mainScreen->Text = mainScreen->Text + ".";
		}
	}
	private: System::Void op(System::Object^ sender, System::EventArgs^ e) {
		if (mainScreen->Text == "")
		{
			mainScreen->Text = "0";
		}
		Button^ op = safe_cast<Button^>(sender);
		if (mainScreen->Text == "0")
		{
			FN = R;
		}
		else
		{
			FN = Double::Parse(mainScreen->Text);
		}
		mainScreen->Text = "0";
		OP = op->Text;
		secScreen->Text = System::Convert::ToString(FN) + " " + OP;
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mainScreen->Text->Contains("-"))
		{
			mainScreen->Text = mainScreen->Text->Remove(0, 1);
		}
		else
		{
			mainScreen->Text = "-" + mainScreen->Text;
		}
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		mainScreen->Text = "0";
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		FN = 0;
		SN = 0;
		mainScreen->Text = "0";
		secScreen->Text = "0";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if (OP == "") {
			mainScreen->Text = Convert::ToString(FN);
		}
		else {
			SN = Double::Parse(mainScreen->Text);
			if (OP == "+")
			{
				R = FN + SN;
			}
			else if (OP == "-")
			{
				R = FN - SN;
			}
			else if (OP == "*")
			{
				R = FN * SN;
			}
			else if (OP == "/")
			{
				R = FN / SN;
			}
			mainScreen->Text = "0";
			secScreen->Text = System::Convert::ToString(FN) + " " + OP + " " + SN;
			mainScreen->Text = System::Convert::ToString(R);
		}
	}
	private: System::Void backSpaceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mainScreen->Text->Length > 1)
		{
			mainScreen->Text = mainScreen->Text->Remove(mainScreen->Text->Length - 1, 1);
		}
		else if (mainScreen->Text->Length == 1)
		{
			mainScreen->Text = "0";
		}
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
