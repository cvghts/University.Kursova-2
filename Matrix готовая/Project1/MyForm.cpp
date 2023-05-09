#include "MyForm.h"
#include "Func.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
	return 0;
}
int N_A(0), M_A(0), N_B(0), M_B(0), N_C(0), M_C(0);
double Det(0);
double** A, ** B, **C;

System::Void Project1::MyForm::MoveA_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete A;
	N_A = N_B;
	M_A = M_B;
	numericN_A->Value = N_B;
	numericM_A->Value = M_B;
	A = new double* [N_A];
	for (int i = 0; i < N_A; i++)
	{
		A[i] = new double[M_A];
	}
	for (int i(0); i < N_A; i++) {
		for (int j(0); j < M_A; j++) {
			A[i][j] = B[i][j];
		}
	}
	dataMatrixA->RowCount = N_A;
	dataMatrixA->ColumnCount = M_A;
	ShowA();
	dataMatrixA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataMatrixA->AutoResizeColumns();
	return System::Void();
}
System::Void Project1::MyForm::MoveB_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete B;
	N_B = N_A;
	M_B = M_A;
	numericN_B->Value = N_A;
	numericM_B->Value = M_A;
	B = new double* [N_B];
	for (int i = 0; i < N_B; i++)
	{
		B[i] = new double[M_B];
	}
	for (int i(0); i < N_B; i++) {
		for (int j(0); j < M_B; j++) {
			B[i][j] = A[i][j];
		}
	}
	dataMatrixB->RowCount = N_B;
	dataMatrixB->ColumnCount = M_B;
	ShowB();
	dataMatrixB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataMatrixB->AutoResizeColumns();
	return System::Void();
}
System::Void Project1::MyForm::MoveA1_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete A;
	N_A = N_C;
	M_A = M_C;
	numericN_A->Value = N_C;
	numericM_A->Value = M_C;
	A = new double* [N_A];
	for (int i = 0; i < N_A; i++)
	{
		A[i] = new double[M_A];
	}
	for (int i(0); i < N_A; i++) {
		for (int j(0); j < M_A; j++) {
			A[i][j] = C[i][j];
		}
	}
	dataMatrixA->RowCount = N_A;
	dataMatrixA->ColumnCount = M_A;
	ShowA();
	dataMatrixA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataMatrixA->AutoResizeColumns();
	return System::Void();
}
System::Void Project1::MyForm::MoveB1_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete B;
	N_B = N_C;
	M_B = M_C;
	numericN_B->Value = N_C;
	numericM_B->Value = M_C;
	B = new double* [N_B];
	for (int i = 0; i < N_B; i++)
	{
		B[i] = new double[M_B];
	}
	for (int i(0); i < N_B; i++) {
		for (int j(0); j < M_B; j++) {
			B[i][j] = C[i][j];
		}
	}
	dataMatrixB->RowCount = N_B;
	dataMatrixB->ColumnCount = M_B;
	ShowB();
	dataMatrixB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataMatrixB->AutoResizeColumns();
	return System::Void();
}
System::Void Project1::MyForm::GenA_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Размерность
	N_A = Convert::ToInt32(numericN_A->Value);
	M_A = Convert::ToInt32(numericM_A->Value);
	//Создание
	A = new double* [N_A];
	for (int i = 0; i < N_A; i++)
	{
		A[i] = new double[M_A];
	}
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			A[i][j] = 0;
		}
	}
	//создание таблицы
	dataMatrixA->RowCount = N_A;
	dataMatrixA->ColumnCount = M_A;
	//заполнение её
	ShowA();
	//авторазмер
	dataMatrixA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixA->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::GenB_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Размерность
	N_B = Convert::ToInt32(numericN_B->Value);
	M_B = Convert::ToInt32(numericM_B->Value);
	//Создание
	B = new double* [N_B];
	for (int i = 0; i < N_B; i++)
	{
		B[i] = new double[M_B];
	}
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			B[i][j] = 0;
		}
	}
	dataMatrixB->RowCount = N_B;
	dataMatrixB->ColumnCount = M_B;
	//заполнение её
	ShowB();
	//авторазмер
	dataMatrixB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixB->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::ZapA_Click(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(NULL));
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	//заполнение её
	ShowA();
	//авторазмер
	dataMatrixA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixA->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::ZapB_Click(System::Object^ sender, System::EventArgs^ e)
{
	srand(time(NULL));
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	//заполнение её
	ShowB();
	//авторазмер
	dataMatrixB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixB->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::dataMatrixA_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	std::string temp;
	for (int i = 0; i < dataMatrixA->RowCount; i++)
	{
		for (int j = 0; j < dataMatrixA->ColumnCount; j++)
		{
			temp = msclr::interop::marshal_as<std::string>(Convert::ToString(dataMatrixA->Rows[i]->Cells[j]->Value));
			for (int k = 0; k < temp.size(); k++)
			{
				if (temp[k] >= '0' && temp[k] <= '9' || temp[k] == '.' || temp[k] == ',' || temp[k] == '-')
				{
					if (temp[k] == ',')
					{
						temp[k] = '.';
					}
					else if (temp[k] == '-')
					{
						continue;
					}
					else if (temp[k] == '.')
					{
						continue;
					}
				}
				else
				{
					dataMatrixA->Rows[i]->Cells[j]->Value = 0;
					MessageBox::Show("Повторіть введення!", "Увага!!!");
					return;
				}
			}
			A[i][j] = atof(temp.c_str());
		}
	}
	dataMatrixA->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::dataMatrixB_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	std::string temp;
	for (int i = 0; i < dataMatrixB->RowCount; i++)
	{
		for (int j = 0; j < dataMatrixB->ColumnCount; j++)
		{
			temp = msclr::interop::marshal_as<std::string>(Convert::ToString(dataMatrixB->Rows[i]->Cells[j]->Value));
			for (int k = 0; k < temp.size(); k++)
			{
				if (temp[k] >= '0' && temp[k] <= '9' || temp[k] == '.' || temp[k] == ',' || temp[k] == '-')
				{
					if (temp[k] == ',')
					{
						temp[k] = '.';
					}
					else if (temp[k] == '-')
					{
						continue;
					}
					else if (temp[k] == '.')
					{
						continue;
					}
				}
				else
				{
					dataMatrixB->Rows[i]->Cells[j]->Value = 0;
					MessageBox::Show("Повторіть введення!", "Увага!!!");
					return;
				}
			}
			B[i][j] = atof(temp.c_str());
		}
	}
	dataMatrixB->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	numericN_A->Value++;
	numericN_A->Value--;
	numericM_A->Value++;
	numericM_A->Value--;
	numericN_B->Value++;
	numericN_B->Value--;
	numericM_B->Value++;
	numericM_B->Value--;
	return System::Void();
}
System::Void Project1::MyForm::plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != N_B || M_A != M_B)
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	C = AddMatrix(A, B, N_A, M_A);

	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = M_A;
	ShowC(N_A,M_A);
	N_C = N_A;
	M_C = M_A;
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataMatrixC->AutoResizeColumns();

	return System::Void();
}
System::Void Project1::MyForm::minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != N_B || M_A != M_B)
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	C = MinusMatrix(A, B, N_A, M_A);

	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = M_A;
	//заполнение её
	ShowC(N_A, M_A);
	N_C = N_A;
	M_C = M_A;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::umn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (M_A != N_B )
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	C = UmnMatrix(A, B, N_A, M_A, N_B, M_B);
	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = M_B;
	//заполнение её
	ShowCUMN();
	N_C = N_A;
	M_C = M_B;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::NumButA_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num = Convert::ToInt32(numericUMN->Value);
	C = UmnMatrixChislo(A, N_A, M_A, num);
	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = M_A;
	//заполнение её
	ShowC(N_A, M_A);
	N_C = N_A;
	M_C = M_A;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::StepButA_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != M_A)
	{
		MessageBox::Show("Матриця не квадратна!", "Увага!!!");
		return;
	}
	int num = Convert::ToInt32(numericSTE->Value);
	num - 1;
	C = pow(A, N_A, M_A, num);
	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = M_A;
	ShowC(N_A, M_A);
	N_C = N_A;
	M_C = M_A;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::NumButB_Click(System::Object^ sender, System::EventArgs^ e)
{
	int num = Convert::ToInt32(numericUMN->Value);
	C = UmnMatrixChislo(B, N_B, M_B, num);
	dataMatrixC->RowCount = N_B;
	dataMatrixC->ColumnCount = M_B;
	//заполнение её
	ShowC(N_B, M_B);
	N_C = N_B;
	M_C = M_B;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::StepButB_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B != M_B)
	{
		MessageBox::Show("Матриця не квадратна!", "Увага!!!");
		return;
	}
	int num = Convert::ToInt32(numericSTE->Value);
	num - 1;
	C = pow(B, N_B, M_B, num);
	dataMatrixC->RowCount = N_B;
	dataMatrixC->ColumnCount = M_B;
	ShowC(N_B, M_B);
	N_C = N_B;
	M_C = M_B;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::TransA_Click(System::Object^ sender, System::EventArgs^ e)
{
	C = Transp(A, N_A, M_A);
	dataMatrixC->RowCount = M_A;
	dataMatrixC->ColumnCount = N_A;
	ShowCTrans(M_A, N_A);
	N_C = M_A;
	M_C = N_A;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::TransB_Click(System::Object^ sender, System::EventArgs^ e)
{
	C = Transp(B, N_B, M_B);
	dataMatrixC->RowCount = M_B;
	dataMatrixC->ColumnCount = N_B;
	ShowCTrans(M_B, N_B);
	N_C = M_B;
	M_C = N_B;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::detA_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != M_A)
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	Det = det(A, N_A);
	
	ShowDetA->Text = Convert::ToString(Det);
	return System::Void();
}
System::Void Project1::MyForm::detB_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B != M_B)
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	Det = det(B, N_B);
	ShowDetB->Text = Convert::ToString(Det);
	return System::Void();
}
System::Void Project1::MyForm::detC_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_C == 0 || M_C == 0)
	{
		MessageBox::Show("Відсутня матриця C!", "Увага!!!");
		return;
	}
	if (N_C != M_C)
	{
		MessageBox::Show("Розбіжність розрядності!", "Увага!!!");
		return;
	}
	Det = det(C, N_C);
	ShowDetC->Text = Convert::ToString(Det);
	return System::Void();
}
System::Void Project1::MyForm::InversA_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != M_A)
	{
		MessageBox::Show("Матриця не квадратна!", "Увага!!!");
		return;
	}
	if (det(A, N_A) == 0)
	{
		MessageBox::Show("Визначник дорівнює 0!", "Увага!!!");
		return;
	}
	if (N_A == 1 && M_A == 1)
	{
		MessageBox::Show("Розмірність матриці дорівнює 1!", "Увага!!!");
		return;
	}
	C = Invers(A, N_A);
	dataMatrixC->RowCount = N_A;
	dataMatrixC->ColumnCount = N_A;
	ShowC(N_A, N_A);
	N_C = N_A;
	M_C = N_A;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
System::Void Project1::MyForm::InversB_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_B != M_B)
	{
		MessageBox::Show("Матриця не квадратна!", "Увага!!!");
		return;
	}
	if (det(B, N_B) == 0)
	{
		MessageBox::Show("Визначник дорівнює 0!", "Увага!!!");
		return;
	}
	if (N_B == 1 && M_B == 1)
	{
		MessageBox::Show("Розмірність матриці дорівнює 1!", "Увага!!!");
		return;
	}
	C = Invers(B, N_B);
	dataMatrixC->RowCount = N_B;
	dataMatrixC->ColumnCount = N_B;
	ShowC(N_B, N_B);
	N_C = N_B;
	M_C = N_B;
	//авторазмер
	dataMatrixC->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);//ячейки
	dataMatrixC->AutoResizeColumns();//столбцы
	return System::Void();
}
void Project1::MyForm::ShowA()
{
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_A; j++)
		{
			dataMatrixA->TopLeftHeaderCell->Value = "A";
			dataMatrixA->Columns[j]->HeaderCell->Value = Convert::ToString((j + 1));
			dataMatrixA->Columns[j]->SortMode = DataGridViewColumnSortMode(0);
			dataMatrixA->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataMatrixA->Rows[i]->Cells[j]->Value = A[i][j];
			
		}
	}
}
void Project1::MyForm::ShowB()
{
	for (int i = 0; i < N_B; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			dataMatrixB->TopLeftHeaderCell->Value = "B";
			dataMatrixB->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataMatrixB->Columns[j]->SortMode = DataGridViewColumnSortMode(0);
			dataMatrixB->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataMatrixB->Rows[i]->Cells[j]->Value = B[i][j];
		}
	}
}
void Project1::MyForm::ShowC(int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			dataMatrixC->TopLeftHeaderCell->Value = "C";
			dataMatrixC->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataMatrixC->Columns[j]->SortMode = DataGridViewColumnSortMode(0);
			dataMatrixC->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataMatrixC->Rows[i]->Cells[j]->Value = C[i][j];
		}
	}
}
void Project1::MyForm::ShowCUMN()
{
	for (int i = 0; i < N_A; i++)
	{
		for (int j = 0; j < M_B; j++)
		{
			dataMatrixC->TopLeftHeaderCell->Value = "C";
			dataMatrixC->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataMatrixC->Columns[j]->SortMode = DataGridViewColumnSortMode(0);
			dataMatrixC->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataMatrixC->Rows[i]->Cells[j]->Value = C[i][j];
		}
	}
}
void Project1::MyForm::ShowCTrans(int N,int M)
{
	for (int i = 0; i < M_A; i++)
	{
		for (int j = 0; j < N_A; j++)
		{
			dataMatrixC->TopLeftHeaderCell->Value = "C";
			dataMatrixC->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataMatrixC->Columns[j]->SortMode = DataGridViewColumnSortMode(0);
			dataMatrixC->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataMatrixC->Rows[i]->Cells[j]->Value = C[i][j];
		}
	}
}
