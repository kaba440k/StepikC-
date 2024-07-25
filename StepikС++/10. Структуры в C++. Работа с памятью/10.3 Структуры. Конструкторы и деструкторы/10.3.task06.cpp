/*Подвиг 6 (с повторением). Объявите в программе структуру с именем (типом) dtime так, чтобы объекты можно было создавать следующим образом (достаточно прописать один конструктор):

dtime tm_null;
dtime tm_1(12);
dtime tm_2(12, 45);
dtime tm_3(12, 45, 8);
При создании объектов указывается параметры типа unsigned char в порядке:

hours - часы; minutes - минуты; seconds - секунды.

Эти значения должны сохраняться в приватных переменных (тип unsigned char), например, с именами: hs, ms, sc. Если какие-либо значения не передаются, то они принимаются равными нулю.

Объявите в структуре dtime следующие публичные методы:

std::string get_time(); - возвращает объект-строку std::string с содержимым (строкой):
hh:mm:ss

Например, для переменных hs=12, ms=8, sc=43 строка должна содержать:

12:08:43

Следующий метод:

void set_time(unsigned char hours, unsigned char minutes, unsigned char seconds); - задает время (записывает данные в переменные hs, ms, sc).
И, наконец, статический метод:

static dtime sum_time(const dtime& t1, const dtime& t2);
Формирует и возвращает новую структуру с суммой времен t1 и t2.

В функции main объявите две переменные tm1 и tm2 структуры dtime. Значения их полей (шесть целых неотрицательных чисел, записанных в одну строчку через пробел) прочитайте из входного потока (в порядке h1, m1, s1 - для первого времени и h2, m2, s2 - для второго времени). Выполните сложение времен tm1 и tm2 с помощью метода sum_time и сохраните результат в переменной time_res. Выведите в консоль время переменной time_res в виде строки, сформированной методом get_time.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.3.8

Sample Input:

12 45 16 4 23 48
Sample Output:

17:09:04
*/

#include <iostream>
#include <string>

using uch = unsigned char;
struct dtime {
private:
    uch h, m, s;
public:
    dtime(uch h = 0, uch m = 0, uch s = 0) {
        this->h = h;
        this->m = m;
        this->s = s;
    }
    std::string get_time() {
        char str[9];
        sprintf(str, "%02hhu:%02hhu:%02hhu", h, m, s);
        return std::string(str);
    }

    void set_time(uch hs, uch ms, uch sc) {
        h = hs; m = ms; s = sc;
    }

    static dtime sum_time(const dtime& t1, const dtime& t2) {
        dtime t;
        t.h = t1.h + t2.h;
        t.m = t1.m + t2.m;
        t.s = t1.s + t2.s;

        if (t.s > 59) {
            t.s -= 60;
            t.m++;
        }
        if (t.m > 59) {
            t.m -= 60;
            t.h++;
        }
        t.h %= 24;
        return t;
    }
};

int main(void)
{
    uch h1, m1, s1;
    uch h2, m2, s2;
    scanf("%hhu %hhu %hhu %hhu %hhu %hhu", &h1, &m1, &s1, &h2, &m2, &s2);
    dtime tm1 = dtime(h1, m1, s1);
    dtime tm2 = dtime(h2, m2, s2);
    dtime time_res = dtime::sum_time(tm1, tm2);
    std::cout << time_res.get_time() << std::endl;
}