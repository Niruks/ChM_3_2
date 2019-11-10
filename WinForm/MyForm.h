#pragma once
#include "Functions.h"
#include <string>

using namespace std;

namespace WinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  b_Text;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  h_Text;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Epsilon_Text;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  n_Text;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V2i_;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V22i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubV2i_V22i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::TextBox^  i_Text;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  Y2_Text3;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  Y1_Text3;
	private: System::Windows::Forms::TextBox^  X2_Text3;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  X1_Text3;
	private: ZedGraph::ZedGraphControl^  PhasePortrait;
	private: ZedGraph::ZedGraphControl^  U2Graph;
	private: ZedGraph::ZedGraphControl^  U1Graph;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Border_text;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  Y2_Text;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Y1_Text;
	private: System::Windows::Forms::TextBox^  X2_Text;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  X1_Text;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  b_Text2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  h_Text2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  Epsilon_Text2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  n_Text2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  U0_Text;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Xi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  V2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubViV2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Ui;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SubUiVi;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
private: System::Windows::Forms::CheckBox^  checkBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Y2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Y1_Text = (gcnew System::Windows::Forms::TextBox());
			this->X2_Text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->X1_Text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->b_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->h_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Epsilon_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->n_Text2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->U0_Text = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubViV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubUiVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Border_text = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V2i_ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->V22i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubV2i_V22i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_Text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->h_Text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Epsilon_Text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->n_Text = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->i_Text = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Y2_Text3 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Y1_Text3 = (gcnew System::Windows::Forms::TextBox());
			this->X2_Text3 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->X1_Text3 = (gcnew System::Windows::Forms::TextBox());
			this->PhasePortrait = (gcnew ZedGraph::ZedGraphControl());
			this->U2Graph = (gcnew ZedGraph::ZedGraphControl());
			this->U1Graph = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1011, 698);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->Y2_Text);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->Y1_Text);
			this->tabPage3->Controls->Add(this->X2_Text);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->X1_Text);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->b_Text2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->h_Text2);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->Epsilon_Text2);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->n_Text2);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->U0_Text);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->zedGraphControl1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1003, 672);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Тестовая задача";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Y2_Text
			// 
			this->Y2_Text->Location = System::Drawing::Point(404, 167);
			this->Y2_Text->Name = L"Y2_Text";
			this->Y2_Text->Size = System::Drawing::Size(57, 20);
			this->Y2_Text->TabIndex = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(364, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 64;
			this->label3->Text = L" Y2 = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(363, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 16);
			this->label4->TabIndex = 63;
			this->label4->Text = L" Y1 = ";
			// 
			// Y1_Text
			// 
			this->Y1_Text->Location = System::Drawing::Point(404, 141);
			this->Y1_Text->Name = L"Y1_Text";
			this->Y1_Text->Size = System::Drawing::Size(57, 20);
			this->Y1_Text->TabIndex = 62;
			// 
			// X2_Text
			// 
			this->X2_Text->Location = System::Drawing::Point(403, 115);
			this->X2_Text->Name = L"X2_Text";
			this->X2_Text->Size = System::Drawing::Size(57, 20);
			this->X2_Text->TabIndex = 61;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(363, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 16);
			this->label10->TabIndex = 60;
			this->label10->Text = L" X2 = ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(363, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 16);
			this->label9->TabIndex = 59;
			this->label9->Text = L" X1 = ";
			// 
			// X1_Text
			// 
			this->X1_Text->Location = System::Drawing::Point(403, 89);
			this->X1_Text->Name = L"X1_Text";
			this->X1_Text->Size = System::Drawing::Size(57, 20);
			this->X1_Text->TabIndex = 58;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(316, 16);
			this->label5->TabIndex = 57;
			this->label5->Text = L"  Контроль выхода на границу интегрирования ";
			// 
			// b_Text2
			// 
			this->b_Text2->Location = System::Drawing::Point(123, 175);
			this->b_Text2->Name = L"b_Text2";
			this->b_Text2->Size = System::Drawing::Size(100, 20);
			this->b_Text2->TabIndex = 56;
			this->b_Text2->Text = L"2";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(467, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 48);
			this->button3->TabIndex = 55;
			this->button3->Text = L"Изменить масштаб от Y1 до Y2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(467, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 48);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Изменить масштаб от X1 до X2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(466, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 48);
			this->button1->TabIndex = 53;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(632, 6);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(360, 215);
			this->textBox1->TabIndex = 52;
			this->textBox1->Text = L"\r\n\r\n\r\n\r\n\r\n\r\n";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(9, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 16);
			this->label11->TabIndex = 51;
			this->label11->Text = L"Начальный шаг";
			// 
			// h_Text2
			// 
			this->h_Text2->Location = System::Drawing::Point(123, 106);
			this->h_Text2->Name = L"h_Text2";
			this->h_Text2->Size = System::Drawing::Size(100, 20);
			this->h_Text2->TabIndex = 50;
			this->h_Text2->Text = L"0,1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(9, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(299, 16);
			this->label12->TabIndex = 49;
			this->label12->Text = L"Параметр контроля локальной погрешности";
			// 
			// Epsilon_Text2
			// 
			this->Epsilon_Text2->Location = System::Drawing::Point(123, 217);
			this->Epsilon_Text2->Name = L"Epsilon_Text2";
			this->Epsilon_Text2->Size = System::Drawing::Size(100, 20);
			this->Epsilon_Text2->TabIndex = 48;
			this->Epsilon_Text2->Text = L"0,001";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(24, 133);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 16);
			this->label13->TabIndex = 47;
			this->label13->Text = L" Число шагов";
			// 
			// n_Text2
			// 
			this->n_Text2->Location = System::Drawing::Point(123, 132);
			this->n_Text2->Name = L"n_Text2";
			this->n_Text2->Size = System::Drawing::Size(100, 20);
			this->n_Text2->TabIndex = 46;
			this->n_Text2->Text = L"1000";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(343, 97);
			this->pictureBox2->TabIndex = 45;
			this->pictureBox2->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(353, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 16);
			this->label14->TabIndex = 44;
			this->label14->Text = L" U0 = ";
			// 
			// U0_Text
			// 
			this->U0_Text->Location = System::Drawing::Point(400, 57);
			this->U0_Text->Name = L"U0_Text";
			this->U0_Text->Size = System::Drawing::Size(60, 20);
			this->U0_Text->TabIndex = 43;
			this->U0_Text->Text = L"10";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->Xi,
					this->Vi, this->V2i, this->SubViV2i, this->OLP, this->hi, this->C1, this->C2, this->Ui, this->SubUiVi
			});
			this->dataGridView1->Location = System::Drawing::Point(10, 243);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(434, 420);
			this->dataGridView1->TabIndex = 42;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			// 
			// Xi
			// 
			this->Xi->HeaderText = L"Xi";
			this->Xi->Name = L"Xi";
			// 
			// Vi
			// 
			this->Vi->HeaderText = L"Vi";
			this->Vi->Name = L"Vi";
			// 
			// V2i
			// 
			this->V2i->HeaderText = L"V2i";
			this->V2i->Name = L"V2i";
			// 
			// SubViV2i
			// 
			this->SubViV2i->HeaderText = L"Vi-V2i";
			this->SubViV2i->Name = L"SubViV2i";
			// 
			// OLP
			// 
			this->OLP->HeaderText = L"ОЛП";
			this->OLP->Name = L"OLP";
			// 
			// hi
			// 
			this->hi->HeaderText = L"hi";
			this->hi->Name = L"hi";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			// 
			// Ui
			// 
			this->Ui->HeaderText = L"Ui";
			this->Ui->Name = L"Ui";
			// 
			// SubUiVi
			// 
			this->SubUiVi->HeaderText = L"|Ui-Vi|";
			this->SubUiVi->Name = L"SubUiVi";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->IsShowPointValues = false;
			this->zedGraphControl1->Location = System::Drawing::Point(450, 227);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->PointValueFormat = L"G";
			this->zedGraphControl1->Size = System::Drawing::Size(542, 436);
			this->zedGraphControl1->TabIndex = 41;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->Border_text);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->b_Text);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->h_Text);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->Epsilon_Text);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->n_Text);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1003, 672);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Основная задача";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Location = System::Drawing::Point(708, 101);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(275, 17);
			this->checkBox1->TabIndex = 70;
			this->checkBox1->Text = L"Использовать контроль локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(688, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(203, 16);
			this->label2->TabIndex = 69;
			this->label2->Text = L" Параметр выхода на границу";
			// 
			// Border_text
			// 
			this->Border_text->Location = System::Drawing::Point(897, 74);
			this->Border_text->Name = L"Border_text";
			this->Border_text->Size = System::Drawing::Size(100, 20);
			this->Border_text->TabIndex = 68;
			this->Border_text->Text = L"0,01";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(834, 6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 48);
			this->button7->TabIndex = 67;
			this->button7->Text = L"Вычислить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(571, 128);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(423, 535);
			this->textBox3->TabIndex = 66;
			this->textBox3->Text = L"\r\n\r\n\r\n\r\n\r\n\r\n";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->V2i_, this->dataGridViewTextBoxColumn13, this->V22i,
					this->dataGridViewTextBoxColumn14, this->SubV2i_V22i, this->dataGridViewTextBoxColumn15, this->S2, this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 125);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(559, 538);
			this->dataGridView3->TabIndex = 65;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"i";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"V1i";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			// 
			// V2i_
			// 
			this->V2i_->HeaderText = L"V2i";
			this->V2i_->Name = L"V2i_";
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"V12i";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// V22i
			// 
			this->V22i->HeaderText = L"V22i";
			this->V22i->Name = L"V22i";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"V1i-V12i";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// SubV2i_V22i
			// 
			this->SubV2i_V22i->HeaderText = L"V2i-V22i";
			this->SubV2i_V22i->Name = L"SubV2i_V22i";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"ОЛП1";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// S2
			// 
			this->S2->HeaderText = L"ОЛП2";
			this->S2->Name = L"S2";
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(267, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(313, 16);
			this->label1->TabIndex = 39;
			this->label1->Text = L" Контроль выхода на границу интегрирования ";
			// 
			// b_Text
			// 
			this->b_Text->Location = System::Drawing::Point(586, 73);
			this->b_Text->Name = L"b_Text";
			this->b_Text->Size = System::Drawing::Size(100, 20);
			this->b_Text->TabIndex = 38;
			this->b_Text->Text = L"1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 16);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Начальный шаг ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// h_Text
			// 
			this->h_Text->Location = System::Drawing::Point(159, 73);
			this->h_Text->Name = L"h_Text";
			this->h_Text->Size = System::Drawing::Size(100, 20);
			this->h_Text->TabIndex = 36;
			this->h_Text->Text = L"0,00001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(278, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(302, 16);
			this->label8->TabIndex = 35;
			this->label8->Text = L" Параметр контроля локальной погрешности";
			// 
			// Epsilon_Text
			// 
			this->Epsilon_Text->Location = System::Drawing::Point(586, 100);
			this->Epsilon_Text->Name = L"Epsilon_Text";
			this->Epsilon_Text->Size = System::Drawing::Size(100, 20);
			this->Epsilon_Text->TabIndex = 34;
			this->Epsilon_Text->Text = L"0,01";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(60, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 16);
			this->label7->TabIndex = 33;
			this->label7->Text = L" Число шагов";
			// 
			// n_Text
			// 
			this->n_Text->Location = System::Drawing::Point(159, 99);
			this->n_Text->Name = L"n_Text";
			this->n_Text->Size = System::Drawing::Size(100, 20);
			this->n_Text->TabIndex = 32;
			this->n_Text->Text = L"100000";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(787, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->i_Text);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->Y2_Text3);
			this->tabPage2->Controls->Add(this->label33);
			this->tabPage2->Controls->Add(this->label34);
			this->tabPage2->Controls->Add(this->Y1_Text3);
			this->tabPage2->Controls->Add(this->X2_Text3);
			this->tabPage2->Controls->Add(this->label35);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->X1_Text3);
			this->tabPage2->Controls->Add(this->PhasePortrait);
			this->tabPage2->Controls->Add(this->U2Graph);
			this->tabPage2->Controls->Add(this->U1Graph);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1003, 672);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графики основной задачи";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// i_Text
			// 
			this->i_Text->Location = System::Drawing::Point(717, 111);
			this->i_Text->Name = L"i_Text";
			this->i_Text->Size = System::Drawing::Size(57, 20);
			this->i_Text->TabIndex = 103;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(689, 111);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(27, 16);
			this->label32->TabIndex = 102;
			this->label32->Text = L" i = ";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(793, 70);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(160, 48);
			this->button10->TabIndex = 101;
			this->button10->Text = L"Изменить масштаб от Y1 до Y2 у графика i";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(793, 10);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(160, 48);
			this->button11->TabIndex = 100;
			this->button11->Text = L"Изменить масштаб от X1 до X2 у графика i\r\n";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// Y2_Text3
			// 
			this->Y2_Text3->Location = System::Drawing::Point(717, 85);
			this->Y2_Text3->Name = L"Y2_Text3";
			this->Y2_Text3->Size = System::Drawing::Size(57, 20);
			this->Y2_Text3->TabIndex = 99;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(677, 86);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(40, 16);
			this->label33->TabIndex = 98;
			this->label33->Text = L" Y2 = ";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(677, 60);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(40, 16);
			this->label34->TabIndex = 97;
			this->label34->Text = L" Y1 = ";
			// 
			// Y1_Text3
			// 
			this->Y1_Text3->Location = System::Drawing::Point(718, 59);
			this->Y1_Text3->Name = L"Y1_Text3";
			this->Y1_Text3->Size = System::Drawing::Size(57, 20);
			this->Y1_Text3->TabIndex = 96;
			// 
			// X2_Text3
			// 
			this->X2_Text3->Location = System::Drawing::Point(717, 33);
			this->X2_Text3->Name = L"X2_Text3";
			this->X2_Text3->Size = System::Drawing::Size(57, 20);
			this->X2_Text3->TabIndex = 95;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(677, 34);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(39, 16);
			this->label35->TabIndex = 94;
			this->label35->Text = L" X2 = ";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(677, 10);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(39, 16);
			this->label36->TabIndex = 93;
			this->label36->Text = L" X1 = ";
			// 
			// X1_Text3
			// 
			this->X1_Text3->Location = System::Drawing::Point(717, 7);
			this->X1_Text3->Name = L"X1_Text3";
			this->X1_Text3->Size = System::Drawing::Size(57, 20);
			this->X1_Text3->TabIndex = 92;
			// 
			// PhasePortrait
			// 
			this->PhasePortrait->IsShowPointValues = false;
			this->PhasePortrait->Location = System::Drawing::Point(437, 137);
			this->PhasePortrait->Name = L"PhasePortrait";
			this->PhasePortrait->PointValueFormat = L"G";
			this->PhasePortrait->Size = System::Drawing::Size(557, 526);
			this->PhasePortrait->TabIndex = 89;
			// 
			// U2Graph
			// 
			this->U2Graph->IsShowPointValues = false;
			this->U2Graph->Location = System::Drawing::Point(2, 309);
			this->U2Graph->Name = L"U2Graph";
			this->U2Graph->PointValueFormat = L"G";
			this->U2Graph->Size = System::Drawing::Size(429, 354);
			this->U2Graph->TabIndex = 91;
			// 
			// U1Graph
			// 
			this->U1Graph->IsShowPointValues = false;
			this->U1Graph->Location = System::Drawing::Point(6, 4);
			this->U1Graph->Name = L"U1Graph";
			this->U1Graph->PointValueFormat = L"G";
			this->U1Graph->Size = System::Drawing::Size(415, 315);
			this->U1Graph->TabIndex = 90;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1009, 699);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	int i = Convert::ToInt32(i_Text->Text);
	double X1 = Convert::ToDouble(X1_Text3->Text);
	double X2 = Convert::ToDouble(X2_Text3->Text);

	if (i == 1)
	{
		GraphPane^ panel = U1Graph->GraphPane;

		panel->XAxis->Min = X1;
		panel->XAxis->Max = X2;

		U1Graph->AxisChange();
		U1Graph->Invalidate();
	}
	else
	{
		if (i == 2)
		{
			GraphPane^ panel = U2Graph->GraphPane;

			panel->XAxis->Min = X1;
			panel->XAxis->Max = X2;

			U2Graph->AxisChange();
			U2Graph->Invalidate();
		}
		else
		{
			GraphPane^ panel = PhasePortrait->GraphPane;

			panel->XAxis->Min = X1;
			panel->XAxis->Max = X2;

			PhasePortrait->AxisChange();
			PhasePortrait->Invalidate();
		}
	}
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	int i = Convert::ToInt32(i_Text->Text);
	double Y1 = Convert::ToDouble(Y1_Text3->Text);
	double Y2 = Convert::ToDouble(Y2_Text3->Text);

	if (i == 1)
	{
		GraphPane^ panel = U1Graph->GraphPane;

		panel->YAxis->Min = Y1;
		panel->YAxis->Max = Y2;

		U1Graph->AxisChange();
		U1Graph->Invalidate();
	}
	else
	{
		if (i == 2)
		{
			GraphPane^ panel = U2Graph->GraphPane;

			panel->YAxis->Min = Y1;
			panel->YAxis->Max = Y2;

			U2Graph->AxisChange();
			U2Graph->Invalidate();
		}
		else
		{
			GraphPane^ panel = PhasePortrait->GraphPane;

			panel->YAxis->Min = Y1;
			panel->YAxis->Max = Y2;

			PhasePortrait->AxisChange();
			PhasePortrait->Invalidate();
		}
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
    GraphPane^ panel1 = U1Graph->GraphPane;
	GraphPane^ panel2 = U2Graph->GraphPane;
	GraphPane^ panel3 = PhasePortrait->GraphPane;

	panel1->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();

	panel1->Title = "1.График U(x)";
	panel1->XAxis->Title = "X";
	panel1->YAxis->Title = "U(x)";

	panel2->Title = "2.График U'(x)";
	panel2->XAxis->Title = "X";
	panel2->YAxis->Title = "U'(x)";

	panel3->Title = "3.Фазовый портрет";
	panel3->XAxis->Title = "U";
	panel3->YAxis->Title = "U'";

	PointPairList^ f1_list = gcnew PointPairList();
	PointPairList^ f2_list = gcnew PointPairList();
	PointPairList^ f3_list = gcnew PointPairList();

	double x = 0.0;
	double v1 = 10.0;
	double v2 = 0.0;
	double h = Convert::ToDouble(h_Text->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	double b = Convert::ToDouble(b_Text->Text);
	double v1plus1, v2plus1;
	double v1cap, v2cap;
	double S1, S2;
	double sub;
	double border = b - Convert::ToDouble(Border_text->Text);
	int n = Convert::ToInt32(n_Text->Text);
	int i;
	int c1 = 0, c2 = 0;
	int k;
	double maxH = h, minH = h, maxS1 = 0.0, xmaxH = 0.0, xminH = 0.0, maxS2 = 0.0;
	string ref = "";

	double xmin_limit = x - 0.01;
	double v1min_limit = v1;
	double v2min_limit = v2;
	double v1max_limit = v1;
	double v2max_limit = v2;

	dataGridView3->Rows->Clear();

	for (i = 0; ((i < n) && (x <= b)); i++)
	{		
		if (i != 0)
		{
			v1plus1 = RK4System(x, v1, v2, h, 1);
			v2plus1 = RK4System(x, v1, v2, h, 2);
			v1cap = Vn1capSystem(x, v1, v2, h, 1);
			v2cap = Vn1capSystem(x, v1, v2, h, 2);
			S1 = CS(v1cap, v1plus1);
			S2 = CS(v2cap, v2plus1);

			if (checkBox1->Checked == false)
			{
				x = xInc(x, h);

				if (h > maxH)
				{
					maxH = h;
					xmaxH = x;
				}
				if (h < minH)
				{
					minH = h;
					xminH = x;
				}
				if (abs(S1) > maxS1)
				{
					maxS1 = abs(S1);
				}
				if (abs(S2) > maxS2)
				{
					maxS2 = abs(S2);
				}
				if ((i < n) || (x <= b))
				{
					sub = b - x;
				}

				dataGridView3->Rows->Add();
				dataGridView3->Rows[i]->Cells[0]->Value = i;
				dataGridView3->Rows[i]->Cells[1]->Value = x;
				dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
				dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
				dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
				dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
				dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
				dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
				dataGridView3->Rows[i]->Cells[8]->Value = S1;
				dataGridView3->Rows[i]->Cells[9]->Value = S2;
				dataGridView3->Rows[i]->Cells[10]->Value = h;
				dataGridView3->Rows[i]->Cells[11]->Value = c1;
				dataGridView3->Rows[i]->Cells[12]->Value = c2;

				v1 = v1plus1;
				v2 = v2plus1;
				f1_list->Add(x, v1);
				f2_list->Add(x, v2);
				f3_list->Add(v1, v2);
				if (v1 < v1min_limit)
				{
					v1min_limit = v1;
				}
				if (v1 > v1max_limit)
				{
					v1max_limit = v1;
				}
				if (v2 < v2min_limit)
				{
					v2min_limit = v2;
				}
				if (v2 > v2max_limit)
				{
					v2max_limit = v2;
				}
				if ((x >= border) && (x <= b))
				{
					break;
				}
			}
			else
			{
				k = LPControlSystem(S1, S2, Epsilon);
				if (k == -1)
				{
					while (k == -1)
					{
						h = h*0.5;
						c1++;
						v1plus1 = RK4System(x, v1, v2, h, 1);
						v2plus1 = RK4System(x, v1, v2, h, 2);
						v1cap = Vn1capSystem(x, v1, v2, h, 1);
						v2cap = Vn1capSystem(x, v1, v2, h, 2);
						S1 = CS(v1cap, v1plus1);
						S2 = CS(v2cap, v2plus1);
						k = LPControlSystem(S1, S2, Epsilon);
					}
				}
				if (k == 1)
				{
					x = xInc(x, h);

					if (h > maxH)
					{
						maxH = h;
						xmaxH = x;
					}
					if (h < minH)
					{
						minH = h;
						xminH = x;
					}
					if (abs(S1) > maxS1)
					{
						maxS1 = abs(S1);
					}
					if (abs(S2) > maxS2)
					{
						maxS2 = abs(S2);
					}
					if ((i < n) || (x <= b))
					{
						sub = b - x;
					}

					dataGridView3->Rows->Add();
					dataGridView3->Rows[i]->Cells[0]->Value = i;
					dataGridView3->Rows[i]->Cells[1]->Value = x;
					dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
					dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
					dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
					dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
					dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
					dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
					dataGridView3->Rows[i]->Cells[8]->Value = S1;
					dataGridView3->Rows[i]->Cells[9]->Value = S2;
					dataGridView3->Rows[i]->Cells[10]->Value = h;
					dataGridView3->Rows[i]->Cells[11]->Value = c1;
					dataGridView3->Rows[i]->Cells[12]->Value = c2;

					h = 2 * h;
					if (i != n - 1)
					{
						c2++;
					}
					//v1 = Correction(v1plus1, S1);
					//v2 = Correction(v2plus1, S2);
					v1 = v1cap;
					v2 = v2cap;

					f1_list->Add(x, v1);
					f2_list->Add(x, v2);
					f3_list->Add(v1, v2);
					if (v1 < v1min_limit)
					{
						v1min_limit = v1;
					}
					if (v1 > v1max_limit)
					{
						v1max_limit = v1;
					}
					if (v2 < v2min_limit)
					{
						v2min_limit = v2;
					}
					if (v2 > v2max_limit)
					{
						v2max_limit = v2;
					}
					if ((x >= border) && (x <= b))
					{
						break;
					}
				}
				else
				{
					x = xInc(x, h);

					if (h > maxH)
					{
						maxH = h;
						xmaxH = x;
					}
					if (h < minH)
					{
						minH = h;
						xminH = x;
					}
					if (abs(S1) > maxS1)
					{
						maxS1 = abs(S1);
					}
					if (abs(S2) > maxS2)
					{
						maxS2 = abs(S2);
					}
					if ((i < n) || (x <= b))
					{
						sub = b - x;
					}

					dataGridView3->Rows->Add();
					dataGridView3->Rows[i]->Cells[0]->Value = i;
					dataGridView3->Rows[i]->Cells[1]->Value = x;
					dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
					dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
					dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
					dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
					dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
					dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
					dataGridView3->Rows[i]->Cells[8]->Value = S1;
					dataGridView3->Rows[i]->Cells[9]->Value = S2;
					dataGridView3->Rows[i]->Cells[10]->Value = h;
					dataGridView3->Rows[i]->Cells[11]->Value = c1;
					dataGridView3->Rows[i]->Cells[12]->Value = c2;

					/*v1 = Correction(v1plus1, S1);
					v2 = Correction(v2plus1, S2);*/

					v1 = v1cap;
					v2 = v2cap;

					f1_list->Add(x, v1);
					f2_list->Add(x, v2);
					f3_list->Add(v1, v2);
					if (v1 < v1min_limit)
					{
						v1min_limit = v1;
					}
					if (v1 > v1max_limit)
					{
						v1max_limit = v1;
					}
					if (v2 < v2min_limit)
					{
						v2min_limit = v2;
					}
					if (v2 > v2max_limit)
					{
						v2max_limit = v2;
					}
					if ((x >= border) && (x <= b))
					{
						break;
					}
				}
			}
			//Без контроля локальной погрешности-----------------
			/*x = xInc(x, h);			

			if (h > maxH)
			{
				maxH = h;
				xmaxH = x;
			}
			if (h < minH)
			{
				minH = h;
				xminH = x;
			}
			if (abs(S1) > maxS1)
			{
				maxS1 = abs(S1);
			}
			if (abs(S2) > maxS2)
			{
				maxS2 = abs(S2);
			}
			if ((i < n) || (x <= b))
			{
				sub = b - x;
			}

			dataGridView3->Rows->Add();
			dataGridView3->Rows[i]->Cells[0]->Value = i;
			dataGridView3->Rows[i]->Cells[1]->Value = x;
			dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
			dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
			dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
			dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
			dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
			dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
			dataGridView3->Rows[i]->Cells[8]->Value = S1;
			dataGridView3->Rows[i]->Cells[9]->Value = S2;
			dataGridView3->Rows[i]->Cells[10]->Value = h;
			dataGridView3->Rows[i]->Cells[11]->Value = c1;
			dataGridView3->Rows[i]->Cells[12]->Value = c2;

			v1 = v1plus1;
			v2 = v2plus1;
			f1_list->Add(x, v1);
			f2_list->Add(x, v2);
			f3_list->Add(v1, v2);
			if (v1 < v1min_limit)
			{
				v1min_limit = v1;
			}
			if (v1 > v1max_limit)
			{
				v1max_limit = v1;
			}
			if (v2 < v2min_limit)
			{
				v2min_limit = v2;
			}
			if (v2 > v2max_limit)
			{
				v2max_limit = v2;
			}
			if ((x >= border) && (x <= b))
					{
						break;
					}*/
			//---------------------------------------------------
			//С контролем локальной погрешности------------------
			//k = LPControlSystem(S1, S2, Epsilon);
			//if (k == -1)
			//{
			//	while (k == -1)
			//	{
			//		h = h*0.5;
			//		c1++;
			//		v1plus1 = RK4System(x, v1, v2, h, 1);
			//		v2plus1 = RK4System(x, v1, v2, h, 2);
			//		v1cap = Vn1capSystem(x, v1, v2, h, 1);
			//		v2cap = Vn1capSystem(x, v1, v2, h, 2);
			//		S1 = CS(v1cap, v1plus1);
			//		S2 = CS(v2cap, v2plus1);
			//		k = LPControlSystem(S1, S2, Epsilon);
			//	}
			//}
			//if (k == 1)
			//{
			//	x = xInc(x, h);

			//	if (h > maxH)
			//	{
			//		maxH = h;
			//		xmaxH = x;
			//	}
			//	if (h < minH)
			//	{
			//		minH = h;
			//		xminH = x;
			//	}
			//	if (abs(S1) > maxS1)
			//	{
			//		maxS1 = abs(S1);
			//	}
			//	if (abs(S2) > maxS2)
			//	{
			//		maxS2 = abs(S2);
			//	}
			//	if ((i < n) || (x <= b))
			//	{
			//		sub = b - x;
			//	}

			//	dataGridView3->Rows->Add();
			//	dataGridView3->Rows[i]->Cells[0]->Value = i;
			//	dataGridView3->Rows[i]->Cells[1]->Value = x;
			//	dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
			//	dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
			//	dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
			//	dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
			//	dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
			//	dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
			//	dataGridView3->Rows[i]->Cells[8]->Value = S1;
			//	dataGridView3->Rows[i]->Cells[9]->Value = S2;
			//	dataGridView3->Rows[i]->Cells[10]->Value = h;
			//	dataGridView3->Rows[i]->Cells[11]->Value = c1;
			//	dataGridView3->Rows[i]->Cells[12]->Value = c2;

			//	h = 2 * h;
			//	if (i != n - 1)
			//	{
			//		c2++;
			//	}
			//	//v1 = Correction(v1plus1, S1);
			//	//v2 = Correction(v2plus1, S2);
			//	v1 = v1cap;
			//	v2 = v2cap;

			//	f1_list->Add(x, v1);
			//	f2_list->Add(x, v2);
			//	f3_list->Add(v1, v2);
			//	if (v1 < v1min_limit)
			//	{
			//		v1min_limit = v1;
			//	}
			//	if (v1 > v1max_limit)
			//	{
			//		v1max_limit = v1;
			//	}
			//	if (v2 < v2min_limit)
			//	{
			//		v2min_limit = v2;
			//	}
			//	if (v2 > v2max_limit)
			//	{
			//		v2max_limit = v2;
			//	}
			//	if ((x >= border) && (x <= b))
			//	{
			//		break;
			//	}
			//}
			//else
			//{
			//	x = xInc(x, h);

			//	if (h > maxH)
			//	{
			//		maxH = h;
			//		xmaxH = x;
			//	}
			//	if (h < minH)
			//	{
			//		minH = h;
			//		xminH = x;
			//	}
			//	if (abs(S1) > maxS1)
			//	{
			//		maxS1 = abs(S1);
			//	}
			//	if (abs(S2) > maxS2)
			//	{
			//		maxS2 = abs(S2);
			//	}
			//	if ((i < n) || (x <= b))
			//	{
			//		sub = b - x;
			//	}

			//	dataGridView3->Rows->Add();
			//	dataGridView3->Rows[i]->Cells[0]->Value = i;
			//	dataGridView3->Rows[i]->Cells[1]->Value = x;
			//	dataGridView3->Rows[i]->Cells[2]->Value = v1plus1;
			//	dataGridView3->Rows[i]->Cells[3]->Value = v2plus1;
			//	dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
			//	dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
			//	dataGridView3->Rows[i]->Cells[6]->Value = v1plus1 - v1cap;
			//	dataGridView3->Rows[i]->Cells[7]->Value = v2plus1 - v2cap;
			//	dataGridView3->Rows[i]->Cells[8]->Value = S1;
			//	dataGridView3->Rows[i]->Cells[9]->Value = S2;
			//	dataGridView3->Rows[i]->Cells[10]->Value = h;
			//	dataGridView3->Rows[i]->Cells[11]->Value = c1;
			//	dataGridView3->Rows[i]->Cells[12]->Value = c2;

			//	/*v1 = Correction(v1plus1, S1);
			//	v2 = Correction(v2plus1, S2);*/

			//	v1 = v1cap;
			//	v2 = v2cap;

			//	f1_list->Add(x, v1);
			//	f2_list->Add(x, v2);
			//	f3_list->Add(v1, v2);
			//	if (v1 < v1min_limit)
			//	{
			//		v1min_limit = v1;
			//	}
			//	if (v1 > v1max_limit)
			//	{
			//		v1max_limit = v1;
			//	}
			//	if (v2 < v2min_limit)
			//	{
			//		v2min_limit = v2;
			//	}
			//	if (v2 > v2max_limit)
			//	{
			//		v2max_limit = v2;
			//	}
			//	if ((x >= border) && (x <= b))
			//	{
			//		break;
			//	}
			//}
			//---------------------------------------------------------------
		}
		else
		{
			f1_list->Add(x, v1);
			f2_list->Add(x, v2);
			f3_list->Add(v1, v2);

			v1cap = v1;
			v2cap = v2;
			S1 = 0.0;
			S2 = 0.0;

			dataGridView3->Rows->Add();
			dataGridView3->Rows[i]->Cells[0]->Value = i;
			dataGridView3->Rows[i]->Cells[1]->Value = x;
			dataGridView3->Rows[i]->Cells[2]->Value = v1;
			dataGridView3->Rows[i]->Cells[3]->Value = v2;
			dataGridView3->Rows[i]->Cells[4]->Value = v1cap;
			dataGridView3->Rows[i]->Cells[5]->Value = v2cap;
			dataGridView3->Rows[i]->Cells[6]->Value = v1 - v1cap;
			dataGridView3->Rows[i]->Cells[7]->Value = v2 - v2cap;
			dataGridView3->Rows[i]->Cells[8]->Value = S1;
			dataGridView3->Rows[i]->Cells[9]->Value = S2;
			dataGridView3->Rows[i]->Cells[10]->Value = h;
			dataGridView3->Rows[i]->Cells[11]->Value = c1;
			dataGridView3->Rows[i]->Cells[12]->Value = c2;
		}
	}
	double xmax_limit = x + 0.01;
	v1min_limit -= 0.5;
	v1max_limit += 0.5;
	v2min_limit -= 0.5;
	v2max_limit += 0.5;

	LineItem Curve1 = panel1->AddCurve("Численное решение U1(x)", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel2->AddCurve("Численное решение U2(x)", f2_list, Color::Blue, SymbolType::None);
	LineItem Curve3 = panel3->AddCurve("Фазовый портрет", f3_list, Color::Black, SymbolType::None);

	panel1->XAxis->Min = xmin_limit;
	panel1->XAxis->Max = xmax_limit;

	panel2->XAxis->Min = xmin_limit;
	panel2->XAxis->Max = xmax_limit;

	panel3->XAxis->Min = v1min_limit;
	panel3->XAxis->Max = v1max_limit;
	panel3->YAxis->Min = v2min_limit;
	panel3->YAxis->Max = v2max_limit;

	U1Graph->AxisChange();
	U1Graph->Invalidate();

	U2Graph->AxisChange();
	U2Graph->Invalidate();

	PhasePortrait->AxisChange();
	PhasePortrait->Invalidate();

	char str[100];

	ref += "Справка\r\n";
	ref += "n=";
	sprintf_s(str, "%d", i);
	ref += str;
	ref += ", b-xn=";
	sprintf_s(str, "%.6lf", sub);
	ref += str;
	ref += "\r\n";
	ref += "max|ОЛП1|=";
	sprintf_s(str, "%.6e", maxS1);
	ref += str;
	ref += ", max|ОЛП2|=";
	sprintf_s(str, "%.6e", maxS2);
	ref += str;
	ref += "\r\n";
	ref += "Общее число удвоений шага=";
	sprintf_s(str, "%d", c2);
	ref += str;
	ref += ", Общее число деления шага=";
	sprintf_s(str, "%d", c1);
	ref += str;
	ref += "\r\n";
	ref += "max hi=";
	sprintf_s(str, "%.6e", maxH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxH);
	ref += str;
	ref += "\r\n";
	ref += "min hi=";
	sprintf_s(str, "%.6e", minH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xminH);
	ref += str;
	ref += "\r\n";
	textBox3->Text = gcnew String(ref.c_str());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double X1 = Convert::ToDouble(X1_Text->Text);
	double X2 = Convert::ToDouble(X2_Text->Text);

	panel->XAxis->Min = X1;
	panel->XAxis->Max = X2;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double Y1 = Convert::ToDouble(Y1_Text->Text);
	double Y2 = Convert::ToDouble(Y2_Text->Text);

	panel->YAxis->Min = Y1;
	panel->YAxis->Max = Y2;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();

	panel->Title = "Графики численного и точного решения";
	panel->XAxis->Title = "X";
	panel->YAxis->Title = "U(x)";

	PointPairList^ f_list = gcnew PointPairList();
	PointPairList^ g_list = gcnew PointPairList();

	double x = 0.0;
	double v = Convert::ToDouble(U0_Text->Text);
	double U0 = v;
	double u;
	double h = Convert::ToDouble(h_Text2->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text2->Text);
	double b = Convert::ToDouble(b_Text2->Text);
	double vplus1;
	double vcap;
	double S;
	double sub;
	int n = Convert::ToInt32(n_Text2->Text);
	int i;
	int c1 = 0, c2 = 0;
	int k;
	double maxH = h, minH = h, maxS = 0.0, xmaxH = 0.0, xminH = 0.0, maxSubUiVi = 0.0, xmaxSubUiVi = 0.0;
	string ref = "";

	double xmin_limit = x - 0.05;

	dataGridView1->Rows->Clear();

	for (i = 0; ((i < n) && (x <= b)); i++)
	{
		if (i != 0)
		{
			vplus1 = RK4(x, v, h);
			vcap = Vn1cap(x, v, h);
			S = CS(vcap, vplus1);
			//Без контроля локальной погрешности----------------------------------
			x = xInc(x, h);

			u = f1Accurate(U0, x);
			g_list->Add(x, u);

			if (h > maxH)
			{
				maxH = h;
				xmaxH = x;
			}
			if (h < minH)
			{
				minH = h;
				xminH = x;
			}
			if (abs(S) > maxS)
			{
				maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
				maxSubUiVi = abs(u - vplus1);
				xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
				sub = b - x;
			}

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView1->Rows[i]->Cells[3]->Value = vcap;
			dataGridView1->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = u;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			v = vplus1;
			f_list->Add(x, v);
			//-------------------------------------------------------------------------
			//С контролем локальной погрешности----------------------------------------
			/*k = LPControl(S, Epsilon);
			if (k == -1)
			{
			while (k == -1)
			{
			h = h*0.5;
			c1++;
			vplus1 = RK4(x, v, h);
			vcap = Vn1cap(x, v, h);
			S = CS(vcap, vplus1);
			k = LPControl(S, Epsilon);
			}
			}
			if (k == 1)
			{
			x = xInc(x, h);

			u = f1Accurate(U0, x);
			g_list->Add(x, u);

			if (h > maxH)
			{
			maxH = h;
			xmaxH = x;
			}
			if (h < minH)
			{
			minH = h;
			xminH = x;
			}
			if (abs(S) > maxS)
			{
			maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
			maxSubUiVi = abs(u - vplus1);
			xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
			sub = b - x;
			}

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView1->Rows[i]->Cells[3]->Value = vcap;
			dataGridView1->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = u;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(u-vplus1);

			h = 2 * h;
			if (i != n - 1)
			{
			c2++;
			}
			v = vcap;
			f_list->Add(x, v);
			}
			else
			{
			x = xInc(x, h);

			u = f1Accurate(U0, x);
			g_list->Add(x, u);

			if (h > maxH)
			{
			maxH = h;
			xmaxH = x;
			}
			if (h < minH)
			{
			minH = h;
			xminH = x;
			}
			if (abs(S) > maxS)
			{
			maxS = abs(S);
			}
			if (abs(u - vplus1) > maxSubUiVi)
			{
			maxSubUiVi = abs(u - vplus1);
			xmaxSubUiVi = x;
			}
			if ((i < n) || (x <= b))
			{
			sub = b - x;
			}

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = vplus1;
			dataGridView1->Rows[i]->Cells[3]->Value = vcap;
			dataGridView1->Rows[i]->Cells[4]->Value = vplus1 - vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = u;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(u - vplus1);

			v = vcap;
			f_list->Add(x, v);
			}*/
			//--------------------------------------------------------------------
		}
		else
		{
			u = f1Accurate(U0, x);
			g_list->Add(x, u);
			f_list->Add(x, v);

			vcap = v;
			S = 0.0;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = v;
			dataGridView1->Rows[i]->Cells[3]->Value = vcap;
			dataGridView1->Rows[i]->Cells[4]->Value = v - vcap;
			dataGridView1->Rows[i]->Cells[5]->Value = S;
			dataGridView1->Rows[i]->Cells[6]->Value = h;
			dataGridView1->Rows[i]->Cells[7]->Value = c1;
			dataGridView1->Rows[i]->Cells[8]->Value = c2;
			dataGridView1->Rows[i]->Cells[9]->Value = u;
			dataGridView1->Rows[i]->Cells[10]->Value = abs(u - v);
		}
	}

	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel->AddCurve("Численное решение", f_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel->AddCurve("Точное решение", g_list, Color::Black, SymbolType::None);

	panel->XAxis->Min = xmin_limit;
	panel->XAxis->Max = xmax_limit;

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	char str[100];

	ref += "Справка\r\n";
	ref += "n=";
	sprintf_s(str, "%d", i);
	ref += str;
	ref += ", b-xn=";
	sprintf_s(str, "%.6lf", sub);
	ref += str;
	ref += "\r\n";
	ref += "max|ОЛП|=";
	sprintf_s(str, "%.6e", maxS);
	ref += str;
	ref += "\r\n";
	ref += "Общее число удвоений шага=";
	sprintf_s(str, "%d", c2);
	ref += str;
	ref += ", Общее число деления шага=";
	sprintf_s(str, "%d", c1);
	ref += str;
	ref += "\r\n";
	ref += "max hi=";
	sprintf_s(str, "%.6lf", maxH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxH);
	ref += str;
	ref += "\r\n";
	ref += "min hi=";
	sprintf_s(str, "%.6lf", minH);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xminH);
	ref += str;
	ref += "\r\n";
	ref += "max |ui-vi|=";
	sprintf_s(str, "%.6e", maxSubUiVi);
	ref += str;
	ref += " при x=";
	sprintf_s(str, "%.4lf", xmaxSubUiVi);
	ref += str;
	ref += "\r\n";
	textBox1->Text = gcnew String(ref.c_str());
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
