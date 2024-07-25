/*Подвиг 6. Продолжите программу. В структуре object объявите следующие публичные методы:

object(short d) - конструктор для инициализации поля data = d и указателя next = nullptr;
object* get_next() - геттер, возвращающий значение указателя next;
short get_data() - геттер, возвращающий значение поля data;
void set_next(object* ptr) - сеттер, записывающий в указатель next значение адреса указателя ptr;
void set_data(short d) - сеттер, записывающий в поле data значение d.
В функции main объявите два smart-указателя unique_ptr с именами top и ptr (объявление можно сделать в одну строчку). Затем, сформируйте два объекта типа object (с помощью функции make_unique) так, чтобы указатель ptr ссылался на первый объект, а указатель top - на второй. Свяжите через внутренний указатель next эти объекты по цепочке:

top -> ptr

То есть, второй объект (top) должен ссылаться на первый (ptr) с помощью внутреннего указателя next. Указатель next первого объекта (ptr) должен принимать значение nullptr.

В первый объект (ptr) в поле data занесите значение 1, а во второй (top) - значение 2.

P. S. В консоль ничего выводить не нужно.
*/

#include <iostream>
#include <memory>

using namespace std;

struct object {
private:
    short data;
    object* next;

public:
    object(short d){
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

int main(void)
{
    unique_ptr<object> top = make_unique<object>(2);
    unique_ptr<object> ptr = make_unique<object>(1);

    top->set_next(ptr.get());


}