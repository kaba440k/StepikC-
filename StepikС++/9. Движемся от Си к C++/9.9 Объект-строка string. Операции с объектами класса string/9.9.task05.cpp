/*Подвиг 5. Продолжите программу. В функции main объявите объект-строку с именем msg. Прочитайте в нее строку целиком (до символа переноса строки или до конца данных во входном потоке). Выведите в консоль по порядку первые четыре символа строки msg. (В тестах гарантируется, что строка имеет минимум 4 символа.)

P. S. Эффективнее выводить отдельные символы функцией putchar.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.9.5

Sample Input:

Bjarne Stroustrup
Sample Output:

Bjar*/
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // здесь продолжайте программу
    std::string msg;
    
    std::getline(std::cin, msg);

    putchar(msg[0]);
    putchar(msg[1]);
    putchar(msg[2]);
    putchar(msg[3]);

}