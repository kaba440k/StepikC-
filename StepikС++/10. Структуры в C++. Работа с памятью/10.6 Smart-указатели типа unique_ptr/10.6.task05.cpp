/*Подвиг 5. Продолжите программу. В функции main объявите smart-указатель unique_ptr с именем p_th, который должен работать с типом данных thing. Создайте объект thing и его адрес присвойте указателю p_th. Через указатель p_th занесите в объект структуры следующие данные:

1 (в uid); 10 (width); 43 (height); 108 (depth)

P. S. В консоль ничего выводить не нужно.
*/

#include <iostream>
#include <memory>

struct thing {
    unsigned long uid;
    unsigned width, height, depth;
};

int main(void)
{
    std::unique_ptr<thing> p_th = std::make_unique<thing>();
    
    (*p_th).uid = 1;
    (*p_th).width = 10;
    (*p_th).height = 43;
    (*p_th).depth = 108;

    
}