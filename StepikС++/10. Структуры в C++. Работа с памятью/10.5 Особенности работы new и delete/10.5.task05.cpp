/*Подвиг 5. Продолжите программу. Объявите в структуре box два конструктора для возможности создания объектов следующими командами:

box b1;
box b2(5, 3, 10);
box *p_b2 = new box();
box *p_b3 = new box(88, 32, 12);
Если при создании объекта аргументы не передаются, то должен срабатывать конструктор без параметров и выводить в консоль строку:

"Empty box"

Если же передается три аргумента, то должен срабатывать конструктор с тремя параметрами, значения которых сохраняются в полях a, b, c и в консоль выводится строка:

"Box: <значение a>, <значение b>, <значение c>"

Например, при a = 6, b = 1, c = 8, должна формироваться строка:

"Box: 6, 1, 8"

В конце и начале строк не должно быть пробелов и выполняться перевод на следующую строку.

В функции main объявите указатель с именем ar_box типа box и с помощью оператора new сформируйте массив длиной 5 из элементов типа box со следующей начальной инициализацией полей a, b, c:

1, 2, 3
6, 2, 1
0, 0, 0
11, 13, 19
23, 5, 7

P. S. Не забудьте в конце освободить память из под массива.
*/

#include <iostream>

using namespace std;

struct box {
    unsigned short a, b, c;
    box() {
        cout << "Empty box" << endl;
    }

    box(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << "Box: " << this->a << ", " << this->b << ", " << this->c << endl;
    }
};

int main(void)
{
	box* ar_box = new box[5]{
        box(1, 2, 3),
        box(6, 2, 1),
        box(0, 0, 0),
        box(11, 13, 19),
        box(23, 5, 7)
    };

    
}