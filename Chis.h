#pragma once
#include <iostream>
class Chis {
	int* x;
public:
	Chis(); //����������� �� ���������
	~Chis(); //����������
	explicit Chis(int value); //����������� � ���������� (�������� ������ explicit)
	 Chis(const Chis& op1); //����������� �����������
	int GetX();
	void SetX(int value);
	void Print();

	//Chis& operator+(int);
	bool operator<(Chis& op1);
	bool operator>(Chis& op1);
	bool operator>=(Chis& op1);
	bool operator<=(Chis& op1);

	//���������� ������������� �������
	friend void operator+(Chis& op1, int);
	friend int operator+(int, Chis& op1);
	friend void operator-(Chis& op1, int); 
	friend int operator-(int,Chis& op1);
	friend bool operator==(Chis& op1, Chis& op2);
	friend bool operator!=(Chis& op1, Chis& op2);
}; 