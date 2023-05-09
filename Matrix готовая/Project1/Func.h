#pragma once
#pragma warning(disable : 4244)

#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include <msclr\marshal_cppstd.h>

/// <summary>
/// Сумма матриц
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="B">Матрица B</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <returns>Матрица C</returns>
double** AddMatrix(double** A, double** B, int N, int M);
/// <summary>
/// Разница матриц
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="B">Матрица B</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <returns>Матрица C</returns>
double** MinusMatrix(double** A, double** B, int N, int M);
/// <summary>
/// Умножение матриц
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="B">Матрица B</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <returns>Матрица C</returns>
double** UmnMatrix(double** A, double** B, int N_A, int M_A, int N_B, int N_C);
/// <summary>
/// Умножение матриц на число
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="B">Матрица B</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <returns>Матрица C</returns>
double** UmnMatrixChislo(double** A, int N, int M,int num);
/// <summary>
/// Транспарирование матрицы
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <returns>Матрица C</returns>
double** Transp(double** A, int N, int M);
/// <summary>
/// Степень матрицы
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="N">Количество строк</param>
/// <param name="M">Количество столбцов</param>
/// <param name="num">Степень</param>
/// <returns>Матрица C</returns>
double** pow(double** A, int N, int M,int num);
/// <summary>
/// Обратная матрица
/// </summary>
/// <param name="A">Матрица A</param>
/// <param name="N">Количество строк</param>
/// <returns>Матрица C</returns>
double** Invers(double** A, int N);
/// <summary>
/// Определитель матрицы
/// </summary>
/// <param name="Matrix">Матрица</param>
/// <param name="N">Количество строк</param>
/// <returns>Определитель матрицы</returns>
double det(double** Matrix, int N);
/// <summary>
/// Округление
/// </summary>
/// <param name="Num">Число</param>
/// <returns>Округлёное число</returns>
double Rounding(double Num);
/// <summary>
/// Округление
/// </summary>
/// <param name="Num">Число</param>
/// <returns>Округлёное число</returns>
double Rounding1(double Num);