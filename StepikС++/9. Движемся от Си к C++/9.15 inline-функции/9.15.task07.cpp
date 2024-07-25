/*Подвиг 7 (на повторение). Продолжите программу. Объявите функцию с именем reverse, которая имеет два параметра (в порядке их указания):

указатель на обрабатываемый массив типа short;
число обрабатываемых элементов массива.
Функция reverse должна "переворачивать" переданный массив, то есть, значения должны идти в обратном порядке: от последнего к первому. Дополнительные массивы при этом создавать не нужно.

Вызовите функцию reverse в функции main для массива digs. Выведите в консоль первые count значений массива digs в одну строчку через пробел.

Sample Input:

1 -2 5 6 3
Sample Output:

3 6 5 -2 1
*/
#include <iostream>

enum {max_size = 20};

void swap(short& a, short& b){
    short t = a;
    a = b;
    b = t;
}

void reverse(short* ar, size_t len){
    for(size_t i = 0; i < len / 2; i++)
        swap(ar[i], ar[len - 1 - i]);
}

int main(void)
{
    short digs[max_size];
    int count = 0;
    while(count < max_size && std::cin >> digs[count])
        count++;

    reverse(digs, count);
    
    for(size_t i = 0; i < count; i++)
        std::cout << digs[i] << " ";
    std::cout << std::endl;
    return 0;
}