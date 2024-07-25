/*Подвиг 6. Продолжите программу. В функции main объявите объект-строку с именем msg. Прочитайте в нее строку целиком (до символа переноса строки или до конца данных во входном потоке). Выведите в консоль последние три символа строки msg в обратном порядке (с конца). (В тестах гарантируется, что строка имеет минимум 3 символа.)

P. S. Эффективнее выводить отдельные символы функцией putchar.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.9.6

Sample Input:

I love C
Sample Output:

C e
*/
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
    
 
    putchar(msg[msg.length() - 1]);
    putchar(msg[msg.length() - 2]);
    putchar(msg[msg.length() - 3]);
}