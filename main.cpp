#include <iostream>
#include "Queue.h"
#include "Chis.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	int value = 0;
	char Choise;
	char oneChoise;
	char twoChoise;
	Queue q;
	Chis one;
	Chis two;
	Chis res;
	do
	{
		cout << "�������� ���������:" << endl;
		cout << "1. ����������� �������." << endl;
		cout << "2. ����� ����� �����." << endl;
		cout << "3. �����.\n>> ";
		cin >> Choise;
		cout << "\n";
		switch (Choise) {
		case '1':
			do {
				cout << "������� �1" << endl;
				cout << "�������� ��������:" << endl;
				cout << "1. ���������� ��������." << endl;
				cout << "2. ���������� ��������." << endl;
				cout << "3. �������� �������." << endl;
				cout << "4. �������� �� �������." << endl;
				cout << "5. �����.\n>> ";
				cin >> oneChoise;
				cout << "\n";
				switch (oneChoise) {
				case '1':
					cout << "1. �������� 1 �������." << endl;
					cout << "2. �������� 2 ��������." << endl;
					cout << "3. �����.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						++(q);
						cout << "������� ��������!" << endl;
						q.Print();
						break;
					case '2':
						(q)++;
						cout << "2 �������� ���������!" << endl;
						q.Print();
						break;
					case '3':
						break;
					}
					break;
				case '2':
					cout << "1. ������� 1 �������." << endl;
					cout << "2. ������� 2 ��������." << endl;
					cout << "3. �����.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						--(q);
						q.Print();
						cout << "�������� ������� �������!" << endl;
						break;
						
					case '2':
						(q)--;
						q.Print();
						break;
					case '3':
						break;
					}
					break;
				case '3':
					q.Print();
					break;
				case '4':
					if (!(q))
						cout << "������� �����!" << endl;
					else
						cout << "������� ������� �������� ��������!" << endl;
					break;
				case '6':
					break;
				}
				system("Pause");
				system("cls");
				//break;
			} while (oneChoise != '5');
			break;
		case '2':
			do {
				cout << "������� �2" << endl;
				cout << "�������� ��������:" << endl;
				cout << "1. ���������� ���������." << endl;
				cout << "2. �������� ������� �����." << endl;
				cout << "3. �������� � ���������������� ������" << endl;
				cout << "4. ��������� ����������������� �����" << endl;
				cout << "5. ���������." << endl;
				cout << "6. �����.\n>> ";
				cin >> oneChoise;
				cout << "\n";
				switch (oneChoise) {
				case '1': //����������
					cout << "�������� �����:" << endl;
					cout << "1. ����� 1." << endl;
					cout << "2. ����� 2." << endl;
					cout << "3. �����.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						cout << "������� �������:\n>> ";
						cin >> value;
						one.SetX(value);
						break;
					case '2':
						cout << "������� �������:\n>> ";
						cin >> value;
						two.SetX(value);
						break;
					case '3':
						break;
					}
					break;
				case '2'://������
					cout << "�������� �����:" << endl;
					cout << "1. ����� 1." << endl;
					cout << "2. ����� 2." << endl;
					cout << "3. �����.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						cout << "������� �����: ";
						one.Print();
						cout << "\n";
						break;
					case '2':
						cout << "������� �����: ";
						two.Print();
						cout << "\n";
						break;
					case '3':
						break;
					}
					break;
				case '3': //��������
					int c;
					cout << "��������� �����: 1) � ������ 1; 2) � ������ 1\n �������: ";
					cin >> c;
					int temp1;
					cout << "������� �����: ";
					cin >> temp1;
					if (c == 1)
					{
						cout << "��������� ��������:" << endl;
						one.Print();
						//one + temp1;
						one + temp1;
						cout << " + ";
						cout << temp1;
						cout << " = ";
						one.Print();
						cout << "\n";
					}
					else if (c == 2)
					{
						two.Print();
						two + temp1;
						cout << " + ";
						cout << temp1;
						cout << " = ";
						two.Print();
						cout << "\n";
					}
					c = 0;
					Choise = '2';
					break;

				case '4'://���������
					cout << "������� �����: 1) �� ������ 1; 2) �� ������ 2\n �������: ";
					cin >> c;
					int y;
					cout << "������� �����: ";
					cin >> y;

					if (c == 1)
					{
						cout << "��������� ���������:" << endl;
						one.Print();
						one - y;
						cout << " - ";
						cout << y;
						cout << " = ";
						one.Print();
						cout << "\n";
					}
					else if (c == 2)
					{
						two.Print();
						two - y;
						cout << " - ";
						cout << y;
						cout << " = ";
						two.Print();
						cout << "\n";
					}
					c = 0;
					Choise = '2';
					break;

				case '5'://���������
					cout << "1. ������ (<<)" << endl;
					cout << "2. ������ (>>)" << endl;
					cout << "3. ��������� (==)" << endl;
					cout << "4. ����������� (!=)" << endl;
					cout << "5. ������ ��� ����� (>=)" << endl;
					cout << "6. ������ ��� ����� (<=)" << endl;
					cout << "7. �����.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						if (one < two) {
							cout << "���������:\n����� 1 ������, ��� ����� 2" << endl;
							one.Print();
							cout << " << ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ������, ��� ����� 2" << endl;
							one.Print();
							cout << " >> ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '2':
						if (one > two) {
							cout << "���������:\n����� 1 ������, ��� ����� 2" << endl;
							one.Print();
							cout << " >> ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ������, ��� ����� 2" << endl;
							one.Print();
							cout << " << ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '3':
						if (one == two) {
							cout << "���������:\n����� 1 ����� ������ 2" << endl;
							one.Print();
							cout << " == ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ������� ������ 2" << endl;
							one.Print();
							cout << " != ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '4':
						if (one != two) {
							cout << "���������:\n����� 1 ������� ������ 2" << endl;
							one.Print();
							cout << " != ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ����� ������ 2" << endl;
							one.Print();
							cout << " == ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '5':
						if (one >= two) {
							cout << "���������:\n����� 1 ������ ��� ����� ������ 2" << endl;
							one.Print();
							cout << " >= ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ������ ��� ����� ������ 2" << endl;
							one.Print();
							cout << " <= ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '6':
						if (one <= two) {
							cout << "���������:\n����� 1 ������ ��� ����� ������ 2" << endl;
							one.Print();
							cout << " <= ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "���������:\n����� 1 ������ ��� ����� ������ 2" << endl;
							one.Print();
							cout << " >= ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '7':
						Choise = '2';
						break;
					}
				}
				system("Pause");
				system("cls");
				} while (oneChoise != '6');

		}
		
	} while (Choise != '3');
	return 0;
}