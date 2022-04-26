#include "Chis.h"
using namespace std;

Chis::Chis() {

	x = new int;
	*x = 0;
}

Chis::~Chis() {
	delete x;
}

Chis::Chis(int value) {
	*x = value;
}

int Chis::GetX() {
	return *x;
}

void Chis::SetX(int value) {
	x = new int;
	*x = value;
	cout << "Класс добавлен!" << endl;
}

void Chis::Print() {
	cout << *x;
}

Chis::Chis(const Chis& op1) {

	x = new int;
	*x = *(op1.x);
}

/*Chis& Chis:: operator + (int a) {
	//Chis result;
	*this->x += a;
	return *this;
	
}*/

void operator+(Chis& op1, int a)
{
	int temp;
	temp = *(op1.x) + a;
	*(op1.x) = temp;

}
int operator+(int a, Chis& op1)
{
	int temp;
	temp = a + *(op1.x);
	return temp;


}

void operator-(Chis& op1, int a)
{
	int temp;
	temp = *(op1.x) - a;
	*(op1.x) = temp;
	
}
int operator-(int a, Chis& op1)
{
	int temp;
	temp =a-*(op1.x);
	return temp;


}

bool Chis::operator<(Chis& op1) {
	if (*this->x < *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}

bool Chis::operator>(Chis& op1) {
	if (*this->x > *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}

bool Chis::operator<=(Chis& op1) {
	if (*this->x <= *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}
bool Chis::operator>=(Chis& op1) {
	if (*this->x >= *(op1.x)) {
		return true;
	}
	else {
		return false;
	}
}


bool operator==(Chis& op1, Chis& op2) {
	if (*(op1.x) == *(op2.x)) {
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(Chis& op1, Chis& op2) {
	if (*(op1.x) != *(op2.x)) {
		return true;
	}
	else {
		return false;
	}
}