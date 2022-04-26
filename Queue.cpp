#include "Queue.h"

using namespace std;
Queue::Queue() {
	Head = nullptr;
	Tail = nullptr;
	size = 0;
}

Queue::~Queue() {
	elem* temp = Tail;
	while (temp != nullptr) 
	{
		temp = Tail->Prev;
		delete Tail;
		Tail = temp;
	}
	//delete Head; //посмотреть по шагам
}
Queue::Queue(int size)
{
	this->size = size;
	cout << "я вызвался\n";
}
Queue::Queue(const Queue& copy)
{
	int* buff = new int[copy.size];
	elem* el_queue = copy.Tail;
	for (int i = copy.size-1; i >=0; i--)
	{	//пока счетчик не дойдет до начала очереди
		buff[i] = el_queue->Val; //заносим в массив значения из циклической очереди
		el_queue = el_queue->Prev; //ставим указатель на предыдущий элемент циклической очереди
	}

	for (int i = 0; i < copy.size; i++)
		this->Add(buff[i]); //вносим в новую очередь значения из массива

	delete[] buff; //удаляем буфер
}

int Queue::GetSize() {
	return size;
}

/*elem* Queue::GetHead() {
	return Head;
}

elem* Queue::GetTail() {
	return Tail;
}

void Queue::SetHead(elem* Val) {
	Head = Val;
}

void Queue::SetTail(elem* Val) {
	Tail = Val;
} */

void Queue::Add(int k) {

	elem* temp = new elem;
	if (size == 0) {
		
		temp->Val = k;
		temp->Prev = nullptr;
		Head = temp;
		Tail = temp;
	}
	else {
		
		temp->Val = k;
		temp->Prev = Tail;
		Tail = temp; //присваиваем "хвосту значение"
	}
	size++;
}

void Queue::Del() {
	if (size ==0)
	{
		return;
	}
	if (size == 1) {
		delete Head;
		Head = nullptr;
		Tail = nullptr;
	}
	else
	{
		elem* temp = Tail;
		while (temp->Prev != Head) {
			temp = temp->Prev;
		}
		delete Head;
		Head = temp;
		Head->Prev = nullptr;
	}
	size--;
}

void Queue::Print() {
	if (size ==0) {
		cout << "Очередь пуста!" << endl;
		return;
	}
	elem* temp = Tail;
	int* och = new int[GetSize()];
	int l = GetSize() - 1;
	for (int i = 0; i < GetSize(); ++i) {
		och[l--] = temp->Val;
		temp = temp->Prev;
	}
	cout << "Текущая очередь: ";
	for (int i = 0; i < GetSize(); ++i) {
		cout << och[i]<< " ";
	}
	cout << "\n";
	delete[] och;
}

bool Queue::operator!() {
	if (GetSize() == 0) {
		return true;
	}
	else {
		return false;
	};
}

Queue& Queue::operator++() { //оператор префиксного инкрементирования  для добавления элемента в очередь
	int k;
	cout << "Введите новое значение: ";
	cin >> k;
	Add(k);
	return *this;
}

Queue& Queue::operator--(int) { //оператор постфиксного декрементирования для удаления из очереди двух элементов с выводом на экран
	if (this->GetSize() < 2) {
		cout << "Количество удаляемых элемнтов больше размера очереди" << endl;
		return *this;
	}
	else if (this->GetSize() == 2) { 
		delete Tail;
		delete Head;
		size = 0;
		cout << "Удалено 2 элемента!" << endl;
		return *this;
	}
	else {
		elem* temp = Tail;
		while (temp->Prev->Prev != Head) {
			temp = temp->Prev;
		}
		delete Head;
		delete temp->Prev;
		Head = temp;
		temp->Prev = NULL;
		size--;
		cout << "Удалено 2 элемента!" << endl;
		return *this;
	}
}

Queue& operator++(Queue& op1, int value) {  //оператор постфикного инкрементирования для добавления двух элементов в очередь
	int k;
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите новое значение: ";
		cin >> k;
		op1.Add(k);
	}
	return op1;
}

Queue& operator--(Queue& op1) { //оператор префиксного декрементирования для извлечения элемента из очереди
	op1.Del();
	return op1;
}