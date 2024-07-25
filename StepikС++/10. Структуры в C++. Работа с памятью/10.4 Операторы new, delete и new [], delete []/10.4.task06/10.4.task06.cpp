/*Подвиг 6. Ниже приведена программа по реализации односвязного списка, то есть, списка из объектов, ссылающихся друг на друга в соответствии со следующим рисунком(sing_linked_list.png):



Модифицируйте приведенный текст программы реализации односвязного списка так, чтобы в него можно было максимум добавлять 10 элементов (со значениями типа double). При попытке добавления 11-го список не должен никак меняться, т.е. такая операция должна игнорироваться.

Названия структур и методов не менять. Также неизменными оставлять сигнатуру методов (возвращаемый тип и набор параметров).

P.S. В программе добавить только указанную модификацию, более ничего делать не нужно (в том числе, что-либо выводить на экран и объявлять функцию main()).

Пример использования структуры OneLinkedList (односвязного списка) (это в программе писать не нужно, приведено для лучшего понимания):

int main(void)
{
	OneLinkedList lst;
	lst.push_front(1);
	lst.push_back(2);
	
	Node* n = lst.getAt(0);
	double d = (n != NULL) ? n->data : 0;
	std::cout << d << std::endl;

	lst.erase(1);
	lst.insert(0, 5);
	lst.insert(0, 2);

	for (Node* node = lst.head; node != NULL; node = node->next) {
		std::cout << node->data << " ";
	}

	return 0;
}
*/
#include <iostream>

struct Node {
public:
	double data;
	Node* next;

public:
	Node(double data) {
		this->data = data;
		this->next = NULL;
	}
};

struct OneLinkedList {
public:
	Node* head, * tail;
    int n;

public:
	OneLinkedList() {
		this->head = this->tail = NULL;
        n = 0;
	}

	~OneLinkedList() {
		while (head != NULL) pop_front();
	}

	void pop_front() {
		if (head == NULL) return;
        n -= 1;// Тут!
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}

		Node* node = head;
		head = node->next;
		delete node;
	}

	void push_back(double data) {
        if (n >= 10)// Тут!
            return;// Тут!
        n += 1;// Тут!
		Node* node = new Node(data);
		if (head == NULL) head = node;
		if (tail != NULL) tail->next = node;
		tail = node;
	}

	void push_front(double data) {
        if (n >= 10)// Тут!
            return;// Тут!
        n += 1;// Тут!
		Node* node = new Node(data);
		node->next = head;
		head = node;
		if (tail == NULL) tail = node;
	}

	void pop_back() {
		if (tail == NULL) return;
        n -= 1;// Тут!
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}

		Node* node = head;
		for (; node->next != tail; node = node->next);

		node->next = NULL;
		delete tail;
		tail = node;
	}

	Node* getAt(int k) {
		if (k < 0) return NULL;

		Node* node = head;
		int n = 0;
		while (node && n != k && node->next) {
			node = node->next;
			n++;
		}

		return (n == k) ? node : NULL;
	}

	void insert(int k, double data) {
		Node* left = getAt(k);
		if (left == NULL) return;
        if (n >= 10)// Тут!
            return;// Тут!
        n += 1;// Тут!

		Node* right = left->next;
		Node* node = new Node(data);

		left->next = node;
		node->next = right;
		if (right == NULL) tail = node;
	}

	void erase(int k) {
		if (k < 0) return;
		if (k == 0) {
			pop_front();
			return;
		}
        n -=1; // Тут!
		Node* left = getAt(k - 1);
		Node* node = left->next;
		if (node == NULL) return;

		Node* right = node->next;
		left->next = right;
		if (node == tail) tail = left;
		delete node;
	}
}

