#pragma onc�

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

	//������������
	Queue();//����������� �� ���������
	~Queue(); //����������
	explicit Queue(int size); //����� ����������� � ����������
	Queue(const Queue& queue_copy);

	//������� � �������
	/*elem* GetHead();  //��������� "������"
	elem* GetTail(); //��������� "������"
	void SetHead(elem* Val); //���������"������"
	void SetTail(elem* Val); //��������� "�����"*/
	int GetSize() ;//�������� ������ �������

	//������� �������
	void Add( int k); //����������
	void Del();//��������
	void Print();//����� �� �����
	

	//������:
	bool operator!(); //������������ �������� ! ��� �������� ������� �� �������
	Queue& operator++(); //�������� ����������� �����������������  ��� ���������� �������� � �������
	Queue& operator--(int); //�������� ������������ ����������������� ��� �������� �� ������� ���� ��������� � ������� �� �����

	//������������� �������
	friend Queue& operator++(Queue& op1, int userVal); //�������� ����������� ����������������� ��� ���������� ���� ��������� � �������
	friend Queue& operator--(Queue& op1); //�������� ����������� ����������������� ��� ���������� �������� �� �������
};
