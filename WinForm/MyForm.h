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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1011, 698);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
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
			this->tabPage1->Text = L"Вычисления";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(752, 74);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 48);
			this->button7->TabIndex = 67;
			this->button7->Text = L"Старт";
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
			this->b_Text->Location = System::Drawing::Point(586, 74);
			this->b_Text->Name = L"b_Text";
			this->b_Text->Size = System::Drawing::Size(100, 20);
			this->b_Text->TabIndex = 38;
			this->b_Text->Text = L"2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 16);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Шаг интегрирования ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// h_Text
			// 
			this->h_Text->Location = System::Drawing::Point(159, 73);
			this->h_Text->Name = L"h_Text";
			this->h_Text->Size = System::Drawing::Size(100, 20);
			this->h_Text->TabIndex = 36;
			this->h_Text->Text = L"0,001";
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
			this->n_Text->Text = L"1000";
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
			this->tabPage2->Text = L"Графики";
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
			this->PhasePortrait->Size = System::Drawing::Size(557, 470);
			this->PhasePortrait->TabIndex = 89;
			// 
			// U2Graph
			// 
			this->U2Graph->IsShowPointValues = false;
			this->U2Graph->Location = System::Drawing::Point(2, 309);
			this->U2Graph->Name = L"U2Graph";
			this->U2Graph->PointValueFormat = L"G";
			this->U2Graph->Size = System::Drawing::Size(429, 298);
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
	double v1 = 0.1;
	double v2 = 0.2;
	double h = Convert::ToDouble(h_Text->Text);
	double Epsilon = Convert::ToDouble(Epsilon_Text->Text);
	double b = Convert::ToDouble(b_Text->Text);
	double v1plus1, v2plus1;
	double v1cap, v2cap;
	double S1, S2;
	double sub;
	int n = Convert::ToInt32(n_Text->Text);
	int i;
	int c1 = 0, c2 = 0;
	int k;
	double maxH = h, minH = h, maxS1 = 0.0, xmaxH = 0.0, xminH = 0.0, maxS2 = 0.0;
	string ref = "";

	double xmin_limit = x - 0.05;

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
			//Без контроля локальной погрешности-----------------
			/*x = xInc(x, h);

			f1_list->Add(x, v1plus1);
			f2_list->Add(x, v2plus1);
			f3_list->Add(x, PhP(v1plus1, v2plus1));

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
			v2 = v2plus1;*/
			//---------------------------------------------------
			//С контролем локальной погрешности------------------
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
				v1 = Correction(v1plus1, S1);
				v2 = Correction(v2plus1, S2);

				f1_list->Add(x, v1);
				f2_list->Add(x, v2);
				f3_list->Add(x, PhP(v1, v2));
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

				v1 = Correction(v1plus1, S1);
				v2 = Correction(v2plus1, S2);

				f1_list->Add(x, v1);
				f2_list->Add(x, v2);
				f3_list->Add(x, PhP(v1, v2));
			}
			//---------------------------------------------------------------
		}
		else
		{
			f1_list->Add(x, v1);
			f2_list->Add(x, v2);
			f3_list->Add(x, PhP(v1, v2));

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
	double xmax_limit = x + 0.05;

	LineItem Curve1 = panel1->AddCurve("Численное решение U1(x)", f1_list, Color::Red, SymbolType::None);
	LineItem Curve2 = panel2->AddCurve("Численное решение U2(x)", f2_list, Color::Blue, SymbolType::None);
	LineItem Curve3 = panel3->AddCurve("Фазовый портрет", f3_list, Color::Black, SymbolType::None);

	panel1->XAxis->Min = xmin_limit;
	panel1->XAxis->Max = xmax_limit;

	panel2->XAxis->Min = xmin_limit;
	panel2->XAxis->Max = xmax_limit;

	panel3->XAxis->Min = xmin_limit;
	panel3->XAxis->Max = xmax_limit;

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
	textBox3->Text = gcnew String(ref.c_str());
}
};
}
