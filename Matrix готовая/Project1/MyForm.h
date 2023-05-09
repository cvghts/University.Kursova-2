#pragma once

namespace Project1
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ InversB;
	private: System::Windows::Forms::Button^ InversA;
	private: System::Windows::Forms::TextBox^ ShowDetC;
	private: System::Windows::Forms::TextBox^ ShowDetB;
	private: System::Windows::Forms::TextBox^ ShowDetA;
	private: System::Windows::Forms::Button^ detC;
	private: System::Windows::Forms::Button^ detB;
	private: System::Windows::Forms::Button^ detA;
	private: System::Windows::Forms::Button^ TransB;
	private: System::Windows::Forms::Button^ StepButB;
	private: System::Windows::Forms::Button^ NumButB;
	private: System::Windows::Forms::Button^ StepButA;
	private: System::Windows::Forms::Button^ NumButA;
	private: System::Windows::Forms::Button^ umn;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ TransA;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericSTE;
	private: System::Windows::Forms::NumericUpDown^ numericUMN;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataMatrixC;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ ZapB;
	private: System::Windows::Forms::Button^ GenB;
	private: System::Windows::Forms::DataGridView^ dataMatrixB;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericM_B;
	private: System::Windows::Forms::NumericUpDown^ numericN_B;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ ZapA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ GenA;
	private: System::Windows::Forms::DataGridView^ dataMatrixA;
	private: System::Windows::Forms::NumericUpDown^ numericM_A;
	private: System::Windows::Forms::NumericUpDown^ numericN_A;
	private: System::Windows::Forms::Button^ MoveB1;

	private: System::Windows::Forms::Button^ MoveA1;




	private: System::Windows::Forms::Button^ MoveA;



	private: System::Windows::Forms::Button^ MoveB;



	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
	#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->InversB = (gcnew System::Windows::Forms::Button());
			this->InversA = (gcnew System::Windows::Forms::Button());
			this->ShowDetC = (gcnew System::Windows::Forms::TextBox());
			this->ShowDetB = (gcnew System::Windows::Forms::TextBox());
			this->ShowDetA = (gcnew System::Windows::Forms::TextBox());
			this->detC = (gcnew System::Windows::Forms::Button());
			this->detB = (gcnew System::Windows::Forms::Button());
			this->detA = (gcnew System::Windows::Forms::Button());
			this->TransB = (gcnew System::Windows::Forms::Button());
			this->StepButB = (gcnew System::Windows::Forms::Button());
			this->NumButB = (gcnew System::Windows::Forms::Button());
			this->StepButA = (gcnew System::Windows::Forms::Button());
			this->NumButA = (gcnew System::Windows::Forms::Button());
			this->umn = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->TransA = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericSTE = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUMN = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->MoveB1 = (gcnew System::Windows::Forms::Button());
			this->dataMatrixC = (gcnew System::Windows::Forms::DataGridView());
			this->MoveA1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->MoveA = (gcnew System::Windows::Forms::Button());
			this->ZapB = (gcnew System::Windows::Forms::Button());
			this->GenB = (gcnew System::Windows::Forms::Button());
			this->dataMatrixB = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericM_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericN_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->MoveB = (gcnew System::Windows::Forms::Button());
			this->ZapA = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GenA = (gcnew System::Windows::Forms::Button());
			this->dataMatrixA = (gcnew System::Windows::Forms::DataGridView());
			this->numericM_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericN_A = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericSTE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUMN))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixC))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericM_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericN_B))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericM_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericN_A))->BeginInit();
			this->SuspendLayout();
			// 
			// InversB
			// 
			this->InversB->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->InversB, L"InversB");
			this->InversB->Name = L"InversB";
			this->InversB->UseVisualStyleBackColor = false;
			this->InversB->Click += gcnew System::EventHandler(this, &MyForm::InversB_Click);
			// 
			// InversA
			// 
			this->InversA->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->InversA, L"InversA");
			this->InversA->Name = L"InversA";
			this->InversA->UseVisualStyleBackColor = false;
			this->InversA->Click += gcnew System::EventHandler(this, &MyForm::InversA_Click);
			// 
			// ShowDetC
			// 
			resources->ApplyResources(this->ShowDetC, L"ShowDetC");
			this->ShowDetC->Name = L"ShowDetC";
			this->ShowDetC->ReadOnly = true;
			// 
			// ShowDetB
			// 
			resources->ApplyResources(this->ShowDetB, L"ShowDetB");
			this->ShowDetB->Name = L"ShowDetB";
			this->ShowDetB->ReadOnly = true;
			// 
			// ShowDetA
			// 
			resources->ApplyResources(this->ShowDetA, L"ShowDetA");
			this->ShowDetA->Name = L"ShowDetA";
			this->ShowDetA->ReadOnly = true;
			// 
			// detC
			// 
			this->detC->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->detC, L"detC");
			this->detC->Name = L"detC";
			this->detC->UseVisualStyleBackColor = false;
			this->detC->Click += gcnew System::EventHandler(this, &MyForm::detC_Click);
			// 
			// detB
			// 
			this->detB->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->detB, L"detB");
			this->detB->Name = L"detB";
			this->detB->UseVisualStyleBackColor = false;
			this->detB->Click += gcnew System::EventHandler(this, &MyForm::detB_Click);
			// 
			// detA
			// 
			this->detA->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->detA, L"detA");
			this->detA->Name = L"detA";
			this->detA->UseVisualStyleBackColor = false;
			this->detA->Click += gcnew System::EventHandler(this, &MyForm::detA_Click);
			// 
			// TransB
			// 
			this->TransB->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->TransB, L"TransB");
			this->TransB->Name = L"TransB";
			this->TransB->UseVisualStyleBackColor = false;
			this->TransB->Click += gcnew System::EventHandler(this, &MyForm::TransB_Click);
			// 
			// StepButB
			// 
			this->StepButB->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->StepButB, L"StepButB");
			this->StepButB->Name = L"StepButB";
			this->StepButB->UseVisualStyleBackColor = false;
			this->StepButB->Click += gcnew System::EventHandler(this, &MyForm::StepButB_Click);
			// 
			// NumButB
			// 
			this->NumButB->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->NumButB, L"NumButB");
			this->NumButB->Name = L"NumButB";
			this->NumButB->UseVisualStyleBackColor = false;
			this->NumButB->Click += gcnew System::EventHandler(this, &MyForm::NumButB_Click);
			// 
			// StepButA
			// 
			this->StepButA->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->StepButA, L"StepButA");
			this->StepButA->Name = L"StepButA";
			this->StepButA->UseVisualStyleBackColor = false;
			this->StepButA->Click += gcnew System::EventHandler(this, &MyForm::StepButA_Click);
			// 
			// NumButA
			// 
			this->NumButA->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->NumButA, L"NumButA");
			this->NumButA->Name = L"NumButA";
			this->NumButA->UseVisualStyleBackColor = false;
			this->NumButA->Click += gcnew System::EventHandler(this, &MyForm::NumButA_Click);
			// 
			// umn
			// 
			resources->ApplyResources(this->umn, L"umn");
			this->umn->Name = L"umn";
			this->umn->UseVisualStyleBackColor = true;
			this->umn->Click += gcnew System::EventHandler(this, &MyForm::umn_Click);
			// 
			// minus
			// 
			resources->ApplyResources(this->minus, L"minus");
			this->minus->Name = L"minus";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// plus
			// 
			resources->ApplyResources(this->plus, L"plus");
			this->plus->Name = L"plus";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// TransA
			// 
			this->TransA->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->TransA, L"TransA");
			this->TransA->Name = L"TransA";
			this->TransA->UseVisualStyleBackColor = false;
			this->TransA->Click += gcnew System::EventHandler(this, &MyForm::TransA_Click);
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Name = L"label7";
			// 
			// numericSTE
			// 
			this->numericSTE->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->numericSTE, L"numericSTE");
			this->numericSTE->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericSTE->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericSTE->Name = L"numericSTE";
			this->numericSTE->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUMN
			// 
			this->numericUMN->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->numericUMN, L"numericUMN");
			this->numericUMN->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUMN->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUMN->Name = L"numericUMN";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Name = L"label8";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->MoveB1);
			this->groupBox3->Controls->Add(this->dataMatrixC);
			this->groupBox3->Controls->Add(this->MoveA1);
			this->groupBox3->Controls->Add(this->label9);
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
			// 
			// MoveB1
			// 
			resources->ApplyResources(this->MoveB1, L"MoveB1");
			this->MoveB1->Name = L"MoveB1";
			this->MoveB1->UseVisualStyleBackColor = true;
			this->MoveB1->Click += gcnew System::EventHandler(this, &MyForm::MoveB1_Click);
			// 
			// dataMatrixC
			// 
			this->dataMatrixC->AllowUserToAddRows = false;
			this->dataMatrixC->AllowUserToDeleteRows = false;
			this->dataMatrixC->AllowUserToResizeColumns = false;
			this->dataMatrixC->AllowUserToResizeRows = false;
			this->dataMatrixC->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataMatrixC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataMatrixC, L"dataMatrixC");
			this->dataMatrixC->Name = L"dataMatrixC";
			this->dataMatrixC->ReadOnly = true;
			this->dataMatrixC->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataMatrixC->TabStop = false;
			// 
			// MoveA1
			// 
			resources->ApplyResources(this->MoveA1, L"MoveA1");
			this->MoveA1->Name = L"MoveA1";
			this->MoveA1->UseVisualStyleBackColor = true;
			this->MoveA1->Click += gcnew System::EventHandler(this, &MyForm::MoveA1_Click);
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->MoveA);
			this->groupBox2->Controls->Add(this->ZapB);
			this->groupBox2->Controls->Add(this->GenB);
			this->groupBox2->Controls->Add(this->dataMatrixB);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->numericM_B);
			this->groupBox2->Controls->Add(this->numericN_B);
			this->groupBox2->Controls->Add(this->label6);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// MoveA
			// 
			resources->ApplyResources(this->MoveA, L"MoveA");
			this->MoveA->Name = L"MoveA";
			this->MoveA->UseVisualStyleBackColor = true;
			this->MoveA->Click += gcnew System::EventHandler(this, &MyForm::MoveA_Click);
			// 
			// ZapB
			// 
			resources->ApplyResources(this->ZapB, L"ZapB");
			this->ZapB->Name = L"ZapB";
			this->ZapB->UseVisualStyleBackColor = true;
			this->ZapB->Click += gcnew System::EventHandler(this, &MyForm::ZapB_Click);
			// 
			// GenB
			// 
			resources->ApplyResources(this->GenB, L"GenB");
			this->GenB->Name = L"GenB";
			this->GenB->UseVisualStyleBackColor = true;
			this->GenB->Click += gcnew System::EventHandler(this, &MyForm::GenB_Click);
			// 
			// dataMatrixB
			// 
			this->dataMatrixB->AllowUserToAddRows = false;
			this->dataMatrixB->AllowUserToDeleteRows = false;
			this->dataMatrixB->AllowUserToResizeColumns = false;
			this->dataMatrixB->AllowUserToResizeRows = false;
			this->dataMatrixB->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataMatrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataMatrixB, L"dataMatrixB");
			this->dataMatrixB->Name = L"dataMatrixB";
			this->dataMatrixB->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataMatrixB->TabStop = false;
			this->dataMatrixB->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataMatrixB_CellEndEdit);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// numericM_B
			// 
			resources->ApplyResources(this->numericM_B, L"numericM_B");
			this->numericM_B->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericM_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericM_B->Name = L"numericM_B";
			this->numericM_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericM_B->ValueChanged += gcnew System::EventHandler(this, &MyForm::GenB_Click);
			// 
			// numericN_B
			// 
			resources->ApplyResources(this->numericN_B, L"numericN_B");
			this->numericN_B->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericN_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericN_B->Name = L"numericN_B";
			this->numericN_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericN_B->ValueChanged += gcnew System::EventHandler(this, &MyForm::GenB_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->MoveB);
			this->groupBox1->Controls->Add(this->ZapA);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->GenA);
			this->groupBox1->Controls->Add(this->dataMatrixA);
			this->groupBox1->Controls->Add(this->numericM_A);
			this->groupBox1->Controls->Add(this->numericN_A);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// MoveB
			// 
			resources->ApplyResources(this->MoveB, L"MoveB");
			this->MoveB->Name = L"MoveB";
			this->MoveB->UseVisualStyleBackColor = true;
			this->MoveB->Click += gcnew System::EventHandler(this, &MyForm::MoveB_Click);
			// 
			// ZapA
			// 
			resources->ApplyResources(this->ZapA, L"ZapA");
			this->ZapA->Name = L"ZapA";
			this->ZapA->UseVisualStyleBackColor = true;
			this->ZapA->Click += gcnew System::EventHandler(this, &MyForm::ZapA_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// GenA
			// 
			resources->ApplyResources(this->GenA, L"GenA");
			this->GenA->Name = L"GenA";
			this->GenA->UseVisualStyleBackColor = true;
			this->GenA->Click += gcnew System::EventHandler(this, &MyForm::GenA_Click);
			// 
			// dataMatrixA
			// 
			this->dataMatrixA->AllowUserToAddRows = false;
			this->dataMatrixA->AllowUserToDeleteRows = false;
			this->dataMatrixA->AllowUserToResizeColumns = false;
			this->dataMatrixA->AllowUserToResizeRows = false;
			this->dataMatrixA->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->dataMatrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataMatrixA, L"dataMatrixA");
			this->dataMatrixA->Name = L"dataMatrixA";
			this->dataMatrixA->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataMatrixA->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataMatrixA->TabStop = false;
			this->dataMatrixA->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataMatrixA_CellEndEdit);
			// 
			// numericM_A
			// 
			resources->ApplyResources(this->numericM_A, L"numericM_A");
			this->numericM_A->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericM_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericM_A->Name = L"numericM_A";
			this->numericM_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericM_A->ValueChanged += gcnew System::EventHandler(this, &MyForm::GenA_Click);
			// 
			// numericN_A
			// 
			this->numericN_A->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->numericN_A, L"numericN_A");
			this->numericN_A->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericN_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericN_A->Name = L"numericN_A";
			this->numericN_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericN_A->ValueChanged += gcnew System::EventHandler(this, &MyForm::GenA_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->InversB);
			this->Controls->Add(this->InversA);
			this->Controls->Add(this->ShowDetC);
			this->Controls->Add(this->ShowDetB);
			this->Controls->Add(this->ShowDetA);
			this->Controls->Add(this->detC);
			this->Controls->Add(this->detB);
			this->Controls->Add(this->detA);
			this->Controls->Add(this->TransB);
			this->Controls->Add(this->StepButB);
			this->Controls->Add(this->NumButB);
			this->Controls->Add(this->StepButA);
			this->Controls->Add(this->NumButA);
			this->Controls->Add(this->umn);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->TransA);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericSTE);
			this->Controls->Add(this->numericUMN);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericSTE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUMN))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixC))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericM_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericN_B))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataMatrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericM_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericN_A))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void MoveA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MoveB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MoveA1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MoveB1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GenA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GenB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ZapA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ZapB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void umn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void NumButA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void StepButA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void NumButB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void StepButB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TransA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TransB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void detA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void detB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void detC_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InversA_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void InversB_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dataMatrixA_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void dataMatrixB_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: void ShowA();
	private: void ShowB();
	private: void ShowC(int N_A, int M_A);
	private: void ShowCUMN();
	private: void ShowCTrans(int N, int M);
	
};
}
