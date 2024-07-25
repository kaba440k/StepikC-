/*Подвиг 7* (развитие подвига 6). Продолжите программу. Скопируйте из предыдущего подвига структуру object со всеми объявленными публичными методами:

object(short d) - конструктор для инициализации поля data = d и указателя next = nullptr;
object* get_next() - геттер, возвращающий значение указателя next;
short get_data() - геттер, возвращающий значение поля data;
void set_next(object* ptr) - сеттер, записывающий в указатель next значение адреса указателя ptr;
void set_data(short d) - сеттер, записывающий в поле data значение d.
Допишите реализацию функции push, которая бы добавляла новый объект структуры object на вершину стека, формируя следующую цепочку(chain.png):



Указатель top после добавления нового объекта должен ссылаться на самый верхний объект (добавленный). Значение поля data нового объекта должно быть равно переданному значению через параметр data функции push. Самый последний (нижний) объект стека должен иметь значение указателя next равным nullptr.

В функции main выведите в одну строчку через пробел значения поля data объектов стека по порядку, начиная с самого верхнего.
*/

#include <iostream>
#include <memory>

struct object {
private:
    short data;
    object* next;

public:
    object(short d) {
        data = d;
        next = nullptr;
    }

    object* get_next() {
        return next;
    }

    short get_data() {
        return data;
    }

    void set_next(object* ptr) {
        next = ptr;
    }

    void set_data(short d) {
        data = d;
    }

};

using st_unique_ptr = std::unique_ptr<object>;

void push(st_unique_ptr& top, short data)
{
    object* ptr = top.get();
    top.release();
    top = std::make_unique<object>(data);
    top->set_next(ptr);
    top->set_data(data);
}

int main(void)
{
    st_unique_ptr top;

    for (short i = 1; i <= 7; ++i)
        push(top, i);

    object* ptr = top.get();
    while (ptr != nullptr)
    {
        std::cout << ptr->get_data() << " ";
        ptr = ptr->get_next();
    }
    std::cout << std::endl;
}