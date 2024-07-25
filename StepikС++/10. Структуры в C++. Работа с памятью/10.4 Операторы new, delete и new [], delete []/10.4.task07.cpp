/*Подвиг 7. Модифицируйте приведенный текст программы реализации односвязного списка (взято из занятия) так, чтобы в его элементах можно было хранить данные по книгам в виде следующей структуры:

typedef struct {
	char author[50];	// автор
	char title[100];	// заголовок
	short year;		// год издания
} BOOK;
В функции main() создайте объект этого односвязного списка с именем lib, используя команду:

OneLinkedList lib;
и добавьте последовательно в него следующие книги:

Пушкин А.С.; Пиковая дама; 2007
Тургенев И.С.; Муму; 2011
Толстой А.Н.; Аэлита; 1995
Балакирев С.М.; Моя жизнь, мои достижения; 2045

То есть, в 1-м элементе списка должна храниться первая запись (книга), во 2-м - вторая запись и т.д.

Названия классов и методов не менять. Также неизменными оставлять сигнатуру методов (возвращаемый тип и набор параметров), кроме параметра data.

P. S. На экран выводить ничего не нужно, только реализовать односвязный список и заполнить его указанным содержимым.
*/

#include <iostream>
#include <cstring>

typedef struct {
    char author[50];	// автор
    char title[100];	// заголовок
    short year;		// год издания
} BOOK;

struct Node {
public:
    BOOK data;
    Node* next;

public:
    Node(const BOOK data) {
        this->data = data;
        this->next = NULL;
    }
};

struct OneLinkedList {
public:
    Node* head, * tail;

public:
    OneLinkedList() {
        this->head = this->tail = NULL;
    }

    ~OneLinkedList() {
        while (head != NULL) pop_front();
    }

    void pop_front() {
        if (head == NULL) return;
        if (head == tail) {
            delete tail;
            head = tail = NULL;
            return;
        }

        Node* node = head;
        head = node->next;
        delete node;
    }

    void push_back(const BOOK& data) {
        Node* node = new Node(data);
        if (head == NULL) head = node;
        if (tail != NULL) tail->next = node;
        tail = node;
    }

    void push_front(const BOOK& data) {
        Node* node = new Node(data);
        node->next = head;
        head = node;
        if (tail == NULL) tail = node;
    }

    void pop_back() {
        if (tail == NULL) return;
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

    void insert(int k, const BOOK& data) {
        Node* left = getAt(k);
        if (left == NULL) return;

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

        Node* left = getAt(k - 1);
        Node* node = left->next;
        if (node == NULL) return;

        Node* right = node->next;
        left->next = right;
        if (node == tail) tail = left;
        delete node;
    }
};

int main(void)
{
    using namespace std;
    
    OneLinkedList lib;
    
    BOOK books[4] = {
        {"Пушкин А.С.", "Пиковая дама", 2007},
        {"Тургенев И.С.", "Муму", 2011},
        {"Толстой А.Н.", "Аэлита", 1995},
        {"Балакирев С.М.", "Моя жизнь, мои достижения", 2045}
    };

    for (const BOOK& book : books) {
        lib.push_back(book);
    }

}