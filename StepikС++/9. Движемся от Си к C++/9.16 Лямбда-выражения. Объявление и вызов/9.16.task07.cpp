/*Подвиг 7. Продолжите программу. Допишите функцию sum_elem, которая должна суммировать все значения элементов массива ar длиной len, для которых функция filter возвращает истинное значение. В функции main вызовите функцию sum_elem для массива marks длиной count, а третьим аргументом пропишите лямбда-функцию для суммирования всех значений  элементов массива marks кратных 3, которые следуют непосредственно за четным значением. Например, для чисел:

1, 2, 3, 4, 5, 5, 7, 8, 9

суммирование должно осуществляться для чисел:

3, 9

Вычисленную сумму выведите в консоль в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.16.7

Sample Input:

3 4 5 6 7 8 9 10 11 12
Sample Output:

9
*/
#include <iostream>

enum {max_length_ar = 20};
using filter_func = bool (*)(int, int);

int sum_elem(const int* ar, size_t len, filter_func filter)
{
    int sum = 0;
    for (size_t i = 1; i < len; i++)
        if (filter(ar[i-1], ar[i])) sum += ar[i];
    return sum;
}

int main(void)
{
    int marks[max_length_ar] = {0};
    int count = 0;
    while(count < max_length_ar && std::cin >> marks[count])
        count++;

    int sum = sum_elem(marks, count, [] (int f, int x) -> bool {
        return f % 2 == 0 && x % 3 == 0;
    });

    std::cout << sum << std::endl;
    return 0;
}