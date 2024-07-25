**Подвиг 1.** Выберите все верные утверждения, связанные со структурами языка С++.

* (+)внутри структур допускается объявление функций, которые называются методами

* (+)идентификатор структуры является именем типа (например, struct data {}; data - тип данных)

* (-)для структуры struct obj {}; переменные можно объявлять только как obj s1;

* (+)для структуры struct obj {}; переменные можно объявлять как obj s1; а также как struct obj s1;

* (+)в целом, инициализация структур в С++ выполняется так же, как и в языке Си


**Подвиг 2.** Выберите все верные утверждения, касающиеся следующей программы:

#include <iostream>

struct vector3D {
    double x, y, z;

    double get_x() { return this->x; }
    double get_y() { return y; }
    static double norm2(double a, double b) { return a*a + b*b; }
};

int main(void)
{
    vector3D v1 {0.5, 2.0, -5.4};

    std::cout << v1.get_x() << std::endl;
    std::cout << v1.norm2(1, 2) << std::endl;

    return 0;
}

* (+)в теле метода get_y при доступе к переменной y указатель this подразумевается

* (-)при вызове v1.norm2() указатель this в теле метода norm2 ссылается на объект v1

* (+)при вызове v1.get_x() указатель this ссылается на объект v1

* (+)из статического метода norm2 нет прямого доступа к полям x, y, z структуры vector3D

* (+)при вызове v1.norm2(1, 2) указатель this в метод norm2 не передается

* (+)в каждый обычный (не статический) метод структуры автоматически передается указатель this

* (+)неявный указатель this в методах структуры vector3D имеет тип vector3D*


**Подвиг 9 (на повторение).** Выберите все верные варианты инициализации полей структуры tag_thing языка Си стандарта C99:

struct tag_thing {
    unsigned int id;
    char name[50];
    double weight;
    double price;
};

* (+)truct tag_thing thing_3 = {};

* (+)struct tag_thing thing_1 = {1, "book", 0.5, 3500.0};

* (+)struct tag_thing thing_5 = {.price=103.5, .weight = 5.45};

* (+)struct tag_thing thing_4 = {.id = 5, .name="toy"};

* (+)struct tag_thing thing_2 = {1, "book"};


**Подвиг 10 (на повторение).** Выберите все верные варианты присвоения значений переменной d типа VAR (на структуру):

typedef struct {
    int var_i;
    double var_d;
} VAR;

VAR d;

* (+)d = (VAR){10};

* (+)d.var_i = 10;

* (+)d.var_d = -0.12;

* (+)d = (VAR){.var_d = 0.5, .var_i = -5};

* (+)d = (VAR){.var_d = 0.5};

* (-)d = 10;