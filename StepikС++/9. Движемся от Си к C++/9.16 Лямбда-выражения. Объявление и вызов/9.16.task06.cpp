/*Подвиг 6. Продолжите программу. Допишите функцию sum_elem, которая должна суммировать все значения элементов массива ar длиной len, для которых функция filter возвращает истинное значение. В функции main вызовите функцию sum_elem для массива marks длиной count, а третьим аргументом пропишите лямбда-функцию для суммирования всех значений элементов массива marks одновременно кратных 2 и 3 (делящихся нацело на 2 и на 3). Вычисленную сумму выведите в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.16.6

Sample Input:

3 4 5 6 7 8 9 10 11 12
Sample Output:

18
*/

#include <iostream>

enum {max_length_ar = 20};
using filter_func = bool (*)(int);

int sum_elem(const int* ar, size_t len, filter_func filter)
{
    // здесь продолжайте функцию
    int sum = 0;
    for (int i = 0; i < len; i++)
        if(filter(ar[i]))
            sum += ar[i];
    
    return sum;
}

int main(void)
{
    int marks[max_length_ar] = {0};
    int count = 0;
    while(count < max_length_ar && std::cin >> marks[count])
        count++;

    // здесь продолжайте функцию main
    int res = sum_elem(marks, count, [](int n){return n % 2 == 0 && n % 3 == 0;});
    std::cout << res << std::endl;

    return 0;
}