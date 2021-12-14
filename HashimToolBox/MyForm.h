#pragma once

#include<opencv2/opencv.hpp>
#include<iostream>
#include<String>
#include<msclr\marshal_cppstd.h>



namespace HashimToolBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;
	using namespace std;
	using namespace cv;


	/* SRC image */
	std::string srcPicPathSTDString;

	Mat src;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rotationDegree;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ xValue;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ yValue;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ gamma;
	private: System::Windows::Forms::TextBox^ glsStart;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ glsEnd;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::CheckBox^ checkBox1;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rotationDegree = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->xValue = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->yValue = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->gamma = (gcnew System::Windows::Forms::TextBox());
			this->glsStart = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->glsEnd = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(32, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Import";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Crimson;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(12, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Histogram Equalization";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(11, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 47);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Image Negative";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Crimson;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(119, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(467, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Enter Rotation Degree";
			// 
			// rotationDegree
			// 
			this->rotationDegree->Location = System::Drawing::Point(470, 66);
			this->rotationDegree->Name = L"rotationDegree";
			this->rotationDegree->Size = System::Drawing::Size(168, 24);
			this->rotationDegree->TabIndex = 6;
			this->rotationDegree->Text = L"50";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Crimson;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(470, 96);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 47);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Rotation";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Crimson;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(470, 256);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 47);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Transition";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// xValue
			// 
			this->xValue->Location = System::Drawing::Point(470, 179);
			this->xValue->Name = L"xValue";
			this->xValue->Size = System::Drawing::Size(168, 24);
			this->xValue->TabIndex = 9;
			this->xValue->Text = L"50";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(467, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Enter X value";
			// 
			// yValue
			// 
			this->yValue->Location = System::Drawing::Point(470, 226);
			this->yValue->Name = L"yValue";
			this->yValue->Size = System::Drawing::Size(168, 24);
			this->yValue->TabIndex = 12;
			this->yValue->Text = L"50";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(467, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 18);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Enter Y value";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Crimson;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(586, 348);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(52, 47);
			this->button7->TabIndex = 13;
			this->button7->Text = L"XY";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Crimson;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(527, 348);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 47);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Y";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Crimson;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(468, 348);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(52, 47);
			this->button9->TabIndex = 15;
			this->button9->Text = L"X";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(467, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 18);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Flip around axis:";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Crimson;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(11, 164);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(214, 47);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Log Transformation";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Crimson;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(11, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(214, 46);
			this->button11->TabIndex = 18;
			this->button11->Text = L"Bit Plane Slicing";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(15, 332);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 18);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Enter Gamma Value";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Crimson;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(16, 386);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(202, 47);
			this->button12->TabIndex = 20;
			this->button12->Text = L"Power Transformation";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// gamma
			// 
			this->gamma->Location = System::Drawing::Point(18, 356);
			this->gamma->Name = L"gamma";
			this->gamma->Size = System::Drawing::Size(200, 24);
			this->gamma->TabIndex = 21;
			this->gamma->Text = L"1";
			// 
			// glsStart
			// 
			this->glsStart->Location = System::Drawing::Point(23, 485);
			this->glsStart->Name = L"glsStart";
			this->glsStart->Size = System::Drawing::Size(94, 24);
			this->glsStart->TabIndex = 24;
			this->glsStart->Text = L"130";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Crimson;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(18, 515);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(200, 47);
			this->button13->TabIndex = 23;
			this->button13->Text = L"Grey Level Slicing";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(19, 460);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Start";
			// 
			// glsEnd
			// 
			this->glsEnd->Location = System::Drawing::Point(124, 485);
			this->glsEnd->Name = L"glsEnd";
			this->glsEnd->Size = System::Drawing::Size(94, 24);
			this->glsEnd->TabIndex = 26;
			this->glsEnd->Text = L"200";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(121, 461);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 18);
			this->label7->TabIndex = 25;
			this->label7->Text = L"End";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Crimson;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(269, 66);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(159, 47);
			this->button14->TabIndex = 27;
			this->button14->Text = L"Traditional Filter";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(229, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 18);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Smoothing Filters:";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Crimson;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(269, 119);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(159, 47);
			this->button15->TabIndex = 29;
			this->button15->Text = L"Gaussian Filter";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Crimson;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(269, 278);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(159, 47);
			this->button16->TabIndex = 30;
			this->button16->Text = L"Cone Filter";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Crimson;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(269, 172);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(159, 47);
			this->button17->TabIndex = 31;
			this->button17->Text = L"Pyramidal Filter";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Crimson;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(269, 225);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(159, 47);
			this->button18->TabIndex = 32;
			this->button18->Text = L"Circular Filter";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Crimson;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(269, 331);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(159, 47);
			this->button19->TabIndex = 33;
			this->button19->Text = L"Median Filter";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(232, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 18);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Sharppening Filters:";
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Crimson;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Location = System::Drawing::Point(269, 475);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(180, 47);
			this->button24->TabIndex = 36;
			this->button24->Text = L"Sobel Y-Axis Filter";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Crimson;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button25->Location = System::Drawing::Point(269, 422);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(180, 47);
			this->button25->TabIndex = 35;
			this->button25->Text = L"Sobel X- Axis Filter";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(1256, 538);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 20);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Made with love by";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Magneto", 10.8F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(1331, 558);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 24);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Hashim Sayed";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox1->Location = System::Drawing::Point(644, 92);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(426, 390);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(1071, 92);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(426, 390);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(819, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 18);
			this->label12->TabIndex = 41;
			this->label12->Text = L"BEFORE";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(1250, 57);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 18);
			this->label13->TabIndex = 42;
			this->label13->Text = L"AFTER";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Crimson;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button20->Location = System::Drawing::Point(468, 422);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(102, 47);
			this->button20->TabIndex = 43;
			this->button20->Text = L"Zoom";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Crimson;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(468, 478);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(102, 47);
			this->button21->TabIndex = 44;
			this->button21->Text = L"Skewing";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(580, 492);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(71, 22);
			this->checkBox1->TabIndex = 45;
			this->checkBox1->Text = L"Invert";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(1508, 591);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->glsEnd);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->glsStart);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->gamma);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->yValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->xValue);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->rotationDegree);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Hashim Toolbox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		equalizeHist(src, src);
		imwrite("after.png.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png.png";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < src.rows; i++)
			for (int j = 0; j < src.cols; j++)
				src.at<uchar>(i, j) = 255 - src.at<uchar>(i, j);
		imwrite("after.png.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png.png";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		src = imread(srcPicPathSTDString, 0);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int rotation = Convert::ToInt32(rotationDegree->Text);
		Mat R = getRotationMatrix2D(Point2f(src.cols / 2, src.rows / 2), rotation, 1);
		warpAffine(src, src, R, src.size());
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int tx = Convert::ToInt32(xValue->Text);
		int	ty = Convert::ToInt32(yValue->Text);
		Mat TM = (Mat_<float>(2, 3) << 1, 0, tx, 0, 1, ty);
		warpAffine(src, src, TM, src.size());
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		flip(src, src, -1);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		flip(src, src, 1);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		flip(src, src, 0);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		src.convertTo(src, CV_32F);
		src = src + 1;
		for (int i = 0; i < src.rows; i++)
			for (int j = 0; j < src.cols; j++)
				src.at<float>(i, j) = log(src.at<float>(i, j));

		normalize(src, src, 0, 255, NORM_MINMAX);
		convertScaleAbs(src, src);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < src.rows; i++)
			for (int j = 0; j < src.cols; j++) {
				if (src.at<uchar>(i, j) & 64)
					src.at<uchar>(i, j) = 255;
				else src.at<uchar>(i, j) = 0;
			}
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		double gammaValue = Convert::ToDouble(gamma->Text);
		src.convertTo(src, CV_32F);
		for (int i = 0; i < src.rows; i++)
			for (int j = 0; j < src.cols; j++)
				src.at<float>(i, j) = powf(src.at<float>(i, j), gammaValue);
		normalize(src, src, 0, 255, NORM_MINMAX);
		convertScaleAbs(src, src);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		int start = Convert::ToInt32(glsStart->Text);
		int end = Convert::ToInt32(glsEnd->Text);
		for (int i = 0; i < src.rows; i++)
			for (int j = 0; j < src.cols; j++)
				if (src.at<uchar>(i, j) > start && src.at<uchar>(i, j) < end)
					src.at<uchar>(i, j) = 255;
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat kernel_T = (Mat_<float>(3, 3) << 1, 1, 1, 1, 1, 1, 1, 1, 1);
		kernel_T = kernel_T / 9;
		filter2D(src, src, CV_8UC1, kernel_T);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat kernel_G = (Mat_<float>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
		kernel_G = kernel_G / 16;
		filter2D(src, src, CV_8UC1, kernel_G);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat kernel_p = (Mat_<float>(5, 5) << 1, 2, 3, 2, 1, 2, 4, 6, 4, 2, 3, 6, 9, 6, 3, 2, 4, 6, 4, 2, 1, 2, 3, 2, 1);
		kernel_p = kernel_p / 81;
		filter2D(src, src, CV_8UC1, kernel_p);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat kernel_c = (Mat_<float>(5, 5) << 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0);
		kernel_c = kernel_c / 21;
		filter2D(src, src, CV_8UC1, kernel_c);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat kernel_co = (Mat_<float>(5, 5) << 0, 0, 1, 0, 0, 0, 2, 2, 2, 0, 1, 2, 5, 2, 1, 0, 2, 2, 2, 0, 0, 0, 1, 0, 0);
		kernel_co = kernel_co / 25;
		filter2D(src, src, CV_8UC1, kernel_co);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		medianBlur(src, src, 9);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		Sobel(src, src, CV_8UC1, 0, 1, 3);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		Sobel(src, src, CV_8UC1, 1, 0, 3);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->InitialDirectory = "C:\\Users\\hashe\\Desktop";
		openFileDialog1->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.png; *.bmp";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ path = System::IO::Path::GetDirectoryName(openFileDialog1->FileName);
			this->pictureBox1->ImageLocation = path;
			std::string saveNameString = marshal_as<std::string>(path);

			for (int i = 0; i < saveNameString.length(); i++) {
				if (saveNameString[i] == '\\')
				{
					saveNameString.replace(i, 1, "//");
				}
			}
			System::String^ imagePath = marshal_as<System::String^>(saveNameString);
			System::String^ srcPicPathSystemString = imagePath + "//" + openFileDialog1->SafeFileName;
			srcPicPathSTDString = marshal_as<std::string>(srcPicPathSystemString);
			this->pictureBox1->ImageLocation = srcPicPathSystemString;
			src = imread(srcPicPathSTDString, 0);
			imwrite("after.png", src);
			pictureBox1->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
			//MessageBox::Show(imagePath + "//" + openImageDialog->SafeFileName, "Path:");
		}

	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		Mat src_zoom = src(Rect(0, 0, src.cols / 2, src.rows / 2));
		resize(src_zoom, src, cv::Size(), 2, 2, 0);
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		Point2f src_p[3];
		Point2f dst_p[3];
		if(checkBox1->Checked){
			src_p[0] = Point2f(0, 0);
			src_p[1] = Point2f(src.cols - 1, 0);
			src_p[2] = Point2f(-10, src.rows - 1); ;
			dst_p[0] = Point2f(0, 0);
			dst_p[1] = Point2f(src.cols - 1, 0);
			dst_p[2] = Point2f(0, src.rows - 1);
		}
		else {
			src_p[0] = Point2f(0, 0);
			src_p[1] = Point2f(src.cols - 1, 0);
			src_p[2] = Point2f(10, src.rows - 1); ;
			dst_p[0] = Point2f(0, 0);
			dst_p[1] = Point2f(src.cols - 1, 0);
			dst_p[2] = Point2f(0, src.rows - 1);
		}

		Mat SM = getAffineTransform(src_p, dst_p);
		warpAffine(src, src, SM, src.size());
		imwrite("after.png", src);
		pictureBox2->ImageLocation = L"D:\\Uni\\Level-4\\HashimToolBox\\HashimToolBox\\after.png";
	}
};
}
