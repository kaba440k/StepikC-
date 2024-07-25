/*Подвиг 4. Объявите в программе inline-функцию с именем sum_ar_int, которая имеет два параметра (порядок важен):

массив целочисленных значений (тип int);
длина переданного массива (число элементов).
Функция sum_ar_int должна вычислять сумму значений элементов переданного массива и возвращать ее в виде целого числа.

В функции main прочитайте из входного потока десять целочисленных значений, записанных через пробел, сохраните их в массиве и вызовите для него функцию sum_ar_int. Вычисленную сумму выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.15.4

Sample Input:

1 2 3 4 5 6 7 8 9 -10
Sample Output:

35
*/
#include <iostream>

inline int sum_ar_int(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += array[i];
    return sum;
}

int main()
{
    int array[10];
    for (int i = 0; i < 10 && std::cin >> array[i]; i++);
    std::cout << sum_ar_int(array, 10);
    return 0;
}