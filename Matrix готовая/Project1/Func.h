#pragma once
#pragma warning(disable : 4244)

#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include <msclr\marshal_cppstd.h>

/// <summary>
/// ����� ������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="B">������� B</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <returns>������� C</returns>
double** AddMatrix(double** A, double** B, int N, int M);
/// <summary>
/// ������� ������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="B">������� B</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <returns>������� C</returns>
double** MinusMatrix(double** A, double** B, int N, int M);
/// <summary>
/// ��������� ������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="B">������� B</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <returns>������� C</returns>
double** UmnMatrix(double** A, double** B, int N_A, int M_A, int N_B, int N_C);
/// <summary>
/// ��������� ������ �� �����
/// </summary>
/// <param name="A">������� A</param>
/// <param name="B">������� B</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <returns>������� C</returns>
double** UmnMatrixChislo(double** A, int N, int M,int num);
/// <summary>
/// ���������������� �������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <returns>������� C</returns>
double** Transp(double** A, int N, int M);
/// <summary>
/// ������� �������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="N">���������� �����</param>
/// <param name="M">���������� ��������</param>
/// <param name="num">�������</param>
/// <returns>������� C</returns>
double** pow(double** A, int N, int M,int num);
/// <summary>
/// �������� �������
/// </summary>
/// <param name="A">������� A</param>
/// <param name="N">���������� �����</param>
/// <returns>������� C</returns>
double** Invers(double** A, int N);
/// <summary>
/// ������������ �������
/// </summary>
/// <param name="Matrix">�������</param>
/// <param name="N">���������� �����</param>
/// <returns>������������ �������</returns>
double det(double** Matrix, int N);
/// <summary>
/// ����������
/// </summary>
/// <param name="Num">�����</param>
/// <returns>��������� �����</returns>
double Rounding(double Num);
/// <summary>
/// ����������
/// </summary>
/// <param name="Num">�����</param>
/// <returns>��������� �����</returns>
double Rounding1(double Num);