/*Подвиг 7*. Нужно продолжить программу, которая реализует логику работы односвязного списка следующей структуры(
structure.png):

Каждый объект списка представляется структурой object, в которой имеется поле data с данными и поле next - указатель на следующий объект списка. Указатель next последнего объекта односвязного списка должен принимать значение nullptr.

Допишите реализации следующих функций:

push_back - для добавления нового объекта в конец односвязного списка с записью в его поле data значения параметра data;
pop_front - для удаления последнего объекта из односвязного списка;
show - для отображения поля data объектов односвязного списка по порядку (от head до tail) в одну строчку через пробел.
В функции main объявите два smart-указателя head и tail типа shared_obj_ptr с начальными значениями nullptr (пустой список). Эти указатели следует передавать в функции push_back и pop_front. В свою очередь функции push_back и pop_front должны корректно менять значения указателей head и tail так, чтобы head всегда указывал на первый элемент односвязного списка, а tail - на последний. Если в списке один элемент, то head и tail ссылаются на один и тот же объект. Если в списке отсутствуют элементы, то head и tail должны быть равны nullptr.

В функции main добавьте в список с помощью функции push_back четыре элемента со значениями поля data 1, 2, 3, 4 (по порядку, от head до tail). Отобразите созданный односвязный список с помощью функции show().
*/

#include <iostream>
#include <memory>

struct object {
    int data;
    std::shared_ptr<object> next;
};

using shared_obj_ptr = std::shared_ptr<object>;

void push_back(shared_obj_ptr& head, shared_obj_ptr& tail, int data)
{
    shared_obj_ptr ptr = std::make_shared<object>();
    ptr->data = data;
    ptr->next = nullptr;
    if (!head) {
        head = ptr;
        tail = ptr;
    }
    else {
        tail->next = ptr;
        tail = ptr;
    }
}

void pop_front(shared_obj_ptr& head, shared_obj_ptr& tail) {
    if (!head)
        return;
    if (head == tail) {
        head = nullptr;
        tail = nullptr;
        return;
    }
    head = head->next;
}

void show(const shared_obj_ptr& head)
{
    shared_obj_ptr ptr = head;
    while (ptr) {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl;
}

int main(void)
{
    shared_obj_ptr head = nullptr, tail = nullptr; // head и tail

    for (int i = 1; i <= 4; ++i)
        push_back(head, tail, i);

    show(head);

}