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
		cout << "Выберите структуру:" << endl;
		cout << "1. Циклическая очередь." << endl;
		cout << "2. Класс целых чисел." << endl;
		cout << "3. Выход.\n>> ";
		cin >> Choise;
		cout << "\n";
		switch (Choise) {
		case '1':
			do {
				cout << "Задение №1" << endl;
				cout << "Выберите действие:" << endl;
				cout << "1. Добавление элемента." << endl;
				cout << "2. Исключение элемента." << endl;
				cout << "3. Показать очередь." << endl;
				cout << "4. Проверка на пустоту." << endl;
				cout << "5. Выход.\n>> ";
				cin >> oneChoise;
				cout << "\n";
				switch (oneChoise) {
				case '1':
					cout << "1. Добавить 1 элемент." << endl;
					cout << "2. Добавить 2 элемента." << endl;
					cout << "3. Выход.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						++(q);
						cout << "Элемент добавлен!" << endl;
						q.Print();
						break;
					case '2':
						(q)++;
						cout << "2 элемента добавлено!" << endl;
						q.Print();
						break;
					case '3':
						break;
					}
					break;
				case '2':
					cout << "1. Удалить 1 элемент." << endl;
					cout << "2. Удалить 2 элемента." << endl;
					cout << "3. Выход.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						--(q);
						q.Print();
						cout << "Элементы успешно удалены!" << endl;
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
						cout << "Очередь пуста!" << endl;
					else
						cout << "Текущая очередь содержит элементы!" << endl;
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
				cout << "Задение №2" << endl;
				cout << "Выберите действие:" << endl;
				cout << "1. Добавление элементов." << endl;
				cout << "2. Показать текущий класс." << endl;
				cout << "3. Сложение с пользовательским числом" << endl;
				cout << "4. Вычитание пользовательского числа" << endl;
				cout << "5. Сравнение." << endl;
				cout << "6. Выход.\n>> ";
				cin >> oneChoise;
				cout << "\n";
				switch (oneChoise) {
				case '1': //добавление
					cout << "Выберите класс:" << endl;
					cout << "1. Класс 1." << endl;
					cout << "2. Класс 2." << endl;
					cout << "3. Выход.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						cout << "Введите элемент:\n>> ";
						cin >> value;
						one.SetX(value);
						break;
					case '2':
						cout << "Введите элемент:\n>> ";
						cin >> value;
						two.SetX(value);
						break;
					case '3':
						break;
					}
					break;
				case '2'://печать
					cout << "Выберите класс:" << endl;
					cout << "1. Класс 1." << endl;
					cout << "2. Класс 2." << endl;
					cout << "3. Выход.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						cout << "Текущий класс: ";
						one.Print();
						cout << "\n";
						break;
					case '2':
						cout << "Текущий класс: ";
						two.Print();
						cout << "\n";
						break;
					case '3':
						break;
					}
					break;
				case '3': //сложение
					int c;
					cout << "Прибавить число: 1) к классу 1; 2) к классу 1\n Введите: ";
					cin >> c;
					int temp1;
					cout << "Введите число: ";
					cin >> temp1;
					if (c == 1)
					{
						cout << "Результат сложения:" << endl;
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

				case '4'://вычитание
					cout << "Вычесть число: 1) из класса 1; 2) из класса 2\n Введите: ";
					cin >> c;
					int y;
					cout << "Введите число: ";
					cin >> y;

					if (c == 1)
					{
						cout << "Результат вычитания:" << endl;
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

				case '5'://сравнение
					cout << "1. Меньше (<<)" << endl;
					cout << "2. Больше (>>)" << endl;
					cout << "3. Равенство (==)" << endl;
					cout << "4. Неравенство (!=)" << endl;
					cout << "5. Больше или равно (>=)" << endl;
					cout << "6. Меньше или равно (<=)" << endl;
					cout << "7. Выход.\n>> ";
					cin >> twoChoise;
					cout << "\n";
					switch (twoChoise) {
					case '1':
						if (one < two) {
							cout << "Результат:\nКласс 1 меньше, чем класс 2" << endl;
							one.Print();
							cout << " << ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 больше, чем класс 2" << endl;
							one.Print();
							cout << " >> ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '2':
						if (one > two) {
							cout << "Результат:\nКласс 1 больше, чем класс 2" << endl;
							one.Print();
							cout << " >> ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 меньше, чем класс 2" << endl;
							one.Print();
							cout << " << ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '3':
						if (one == two) {
							cout << "Результат:\nКласс 1 равен классу 2" << endl;
							one.Print();
							cout << " == ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 неравен классу 2" << endl;
							one.Print();
							cout << " != ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '4':
						if (one != two) {
							cout << "Результат:\nКласс 1 неравен классу 2" << endl;
							one.Print();
							cout << " != ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 равен классу 2" << endl;
							one.Print();
							cout << " == ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '5':
						if (one >= two) {
							cout << "Результат:\nКласс 1 больше или равен классу 2" << endl;
							one.Print();
							cout << " >= ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 меньше или равен классу 2" << endl;
							one.Print();
							cout << " <= ";
							two.Print();
							cout << "\n";
						}
						Choise = '2';
						break;
					case '6':
						if (one <= two) {
							cout << "Результат:\nКласс 1 меньше или равен классу 2" << endl;
							one.Print();
							cout << " <= ";
							two.Print();
							cout << "\n";
						}
						else {
							cout << "Результат:\nКласс 1 больше или равен классу 2" << endl;
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