#pragma once
#include <iostream>
class Chis {
	int* x;
public:
	Chis(); //конструктор по умолчанию
	~Chis(); //деструктор
	explicit Chis(int value); //констурктор с параметром (подумать насчет explicit)
	 Chis(const Chis& op1); //конструктор копирования
	int GetX();
	void SetX(int value);
	void Print();

	//Chis& operator+(int);
	bool operator<(Chis& op1);
	bool operator>(Chis& op1);
	bool operator>=(Chis& op1);
	bool operator<=(Chis& op1);

	//перегрузка дружественной функции
	friend void operator+(Chis& op1, int);
	friend int operator+(int, Chis& op1);
	friend void operator-(Chis& op1, int); 
	friend int operator-(int,Chis& op1);
	friend bool operator==(Chis& op1, Chis& op2);
	friend bool operator!=(Chis& op1, Chis& op2);
}; 