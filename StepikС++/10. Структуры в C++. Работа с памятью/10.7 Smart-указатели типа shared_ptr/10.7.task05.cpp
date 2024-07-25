/*Подвиг 5. Продолжите программу. Объявите указатель shared_ptr с именем p_val для типа данных short. Выделите область памяти для хранения данных типа short и присвойте адрес этой области указателю p_val. Занесите в эту область значение переменной x. Выведите в консоль значения байт выделенной области памяти (на которую ссылается p_val) в одну строчку через пробел в виде беззнаковых десятичных чисел.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.7.5

Sample Input:

4545
Sample Output:

193 17 
*/

#include <iostream>
#include <memory>
using namespace std;

int main(void) {
    int x;
    std::cin >> x;

    shared_ptr<short> p_val;
    p_val = make_shared<short>();
    *p_val = x;

    unsigned char* p = (unsigned char*)p_val.get();

    printf("%u %u", *p, *(p + 1));
}