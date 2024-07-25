/*Подвиг 7 (с повторением). Продолжите программу. В структуре tag_time объявите метод со следующей сигнатурой:

char* get_time(char* str, size_t max_length);
Этот метод должен в переданную строку str записывать время в формате:

hh:mm:ss

и возвращать ее (адрес этой строки). Например, для переменных hours=12, minutes=8, seconds=43 должны получать строку:

12:08:43

Обратите внимание на наличие незначащего нуля перед числами меньше 10. Также нужно контролировать возможный выход за пределы строки str (длина строки max_length).

В структуре tag_time объявите еще один статический метод с сигнатурой:

static tag_time sum_time(const tag_time& t1, const tag_time& t2);
Этот метод должен формировать и возвращать новую структуру с суммой времен t1 и t2. Причем время нужно складывать так, чтобы минуты и секунды не выходили из пределов [0; 59].

В функции main объявите две переменные tm1 и tm2 структуры tag_time. Значения их полей (шесть целых неотрицательных чисел, записанных в одну строчку через пробел) прочитайте из входного потока. Выполните сложение времен tm1 и tm2 с помощью метода sum_time и сохраните результат в переменной time_res. Выведите в консоль время переменной time_res в виде строки, сформированной методом get_time.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.1.7

Sample Input:

12 45 16 4 23 48
Sample Output:

17:09:04
*/
#include <iostream>

enum { max_len = 8 };

struct tag_time {
    unsigned char hours;
    unsigned char minutes;
    unsigned char seconds;
    char* get_time(char* str, size_t max_length) {
        if (max_length < max_len + 1) {
            return nullptr;
        }
        sprintf(str, "%02hhu:%02hhu:%02hhu", hours, minutes, seconds);
        return str;
    };
    static tag_time sum_time(const tag_time& t1, const tag_time& t2) {
        tag_time t;
        t.seconds = (t1.seconds + t2.seconds) % 60;
        bool add_m = (t1.seconds + t2.seconds) / 60;
        t.minutes = (t1.minutes + t2.minutes + add_m) % 60;
        bool add_h = (t1.minutes + t2.minutes + add_m) / 60;
        t.hours = (t1.hours + t2.hours + add_h) % 24;
        return t;
    };
};

int main(void)
{
    char buffer[max_len + 1];
    tag_time tm1, tm2;
    scanf("%hhu %hhu %hhu", &tm1.hours, &tm1.minutes, &tm1.seconds);
    scanf("%hhu %hhu %hhu", &tm2.hours, &tm2.minutes, &tm2.seconds);
    tag_time time_res = tag_time::sum_time(tm1, tm2);
    std::cout << time_res.get_time(buffer, sizeof(buffer) / sizeof(*buffer)) << std::endl;

}