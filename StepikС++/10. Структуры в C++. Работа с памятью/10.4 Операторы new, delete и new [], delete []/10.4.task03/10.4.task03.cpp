/*Подвиг 3. Объявите в программе структуру с именем (типом) rectangle и следующими приватными полями:

x0, y0, x1, y1 - целочисленные (int) координаты верхнего левого угла (x0, y0) прямоугольника и координаты нижнего правого угла (x1, y1) прямоугольника.(rectangle.png)



Объекты структуры rectangle допустимо создавать следующим образом:

rectangle r_1;
rectangle r_2(1, 2, 10, 20);
Если координаты не указаны, то все они принимаются равными нулю. 

Дополнительно в структуре rectangle объявите следующие публичные методы:

bool is_in_rect(int x, int y); // проверяет попадание точки (x, y) внутрь прямоугольника; true - если попадает (включая границы), false - если не попадает
void set_coords(int x0, int y0, int x1, int y1); // задает новые координаты прямоугольника
void get_coords(int& x0, int& y0, int& x1, int& y1); // возвращает текущие координаты прямоугольника
В функции main объявите указатель ptr_r с типом rectangle и с помощью оператора new создайте объект rectangle с координатами (-5, 4), (8, 32). Прочитайте из входного потока два целых числа (x, y), записанных через пробел, и путем вызова метода is_in_rect определите принадлежность точки с прочитанными координатами прямоугольнику, на который ссылается указатель ptr_r. Выведите в консоль строку "yes", если точка попадает (принадлежит), и "no" - в противном случае.

P. S. Не забудьте в конце освободить память для созданного объекта с помощью оператора delete.
Sample Input:

-4 5
Sample Output:

yes
*/

#include <iostream>

struct rectangle {
private:
    int x0, y0, x1, y1;

public:
    rectangle() {
        this->set_coords(0, 0, 0, 0);
    }
    rectangle(int x0, int y0, int x1, int y1) {
        this->set_coords(x0, y0, x1, y1);
    }

    bool is_in_rect(int x, int y) {
        return x >= x0 && x <= x1 && y >= y0 && y <= y1;
    }

    void set_coords(int x0, int y0, int x1, int y1) {
        this->x0 = x0; this->y0 = y0;
        this->x1 = x1; this->y1 = y1;
    }

    void get_coords(int& x0, int& y0, int& x1, int& y1) {
        x0 = this->x0; y0 = this->y0;
        x1 = this->x1; y1 = this->y1;
    }

};

int main()
{
    rectangle* ptr_r = new rectangle(-5, 4, 8, 32);
    int x, y;
    std::cin >> x >> y;
    std::cout << (ptr_r->is_in_rect(x, y) ? "yes" : "no") << std::endl;
    delete ptr_r;
    return 0;
}