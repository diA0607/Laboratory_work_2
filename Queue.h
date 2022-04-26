#pragma oncе

#include <iostream>

typedef struct elem {
	int Val;
	elem* Prev;
}elem;

class Queue {
private:
	elem* Head; 
	elem* Tail;
	int size;
public:

	//конструкторы
	Queue();//конструктор по умолчанию
	~Queue(); //деструктор
	explicit Queue(int size); //явный конструктор с параметром
	Queue(const Queue& queue_copy);

	//сеттеры и геттеры
	/*elem* GetHead();  //получение "головы"
	elem* GetTail(); //получение "хвоста"
	void SetHead(elem* Val); //поместить"голову"
	void SetTail(elem* Val); //поместить "хвост"*/
	int GetSize() ;//получить размер очереди

	//функции очереди
	void Add( int k); //добавление
	void Del();//удаление
	void Print();//вывод на экран
	

	//методы:
	bool operator!(); //перегруженый оператор ! для проверки очереди на пустоту
	Queue& operator++(); //оператор префиксного инкрементирования  для добавления элемента в очередь
	Queue& operator--(int); //оператор постфиксного декрементирования для удаления из очереди двух элементов с выводом на экран

	//дружественные функции
	friend Queue& operator++(Queue& op1, int userVal); //оператор постфикного инкрементирования для добавления двух элементов в очередь
	friend Queue& operator--(Queue& op1); //оператор префиксного декрементирования для извлечения элемента из очереди
};
