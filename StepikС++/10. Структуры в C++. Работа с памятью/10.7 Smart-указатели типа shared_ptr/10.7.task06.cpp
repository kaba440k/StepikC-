/*Подвиг 6. Продолжите программу в стандарте C++20. В функции sum_ar добавьте реализацию по вычислению суммы элементов переданного массива ar длиной len элементов. Функция sum_ar должна возвращать вычисленное значение суммы.
В функции main прочитайте из входного потока целые числа (не более max_size_ar, т.е. их может быть и больше, но читать только первые max_size_ar значений), записанные в одну строчку через пробел, в массив ar. Вызовите для массива ar функцию ar_sum и вычислите сумму прочитанных из входного потока значений. Полученное значение суммы выведите в консоль в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.7.6

Sample Input:

5 4 2 -10 8 7
Sample Output:

16
*/
#include <iostream>
#include <memory>

enum {max_size_ar = 10};

using shared_ari_ptr = std::shared_ptr<int[]>;

int sum_ar(const shared_ari_ptr& ar, size_t len)
{
    int sum = 0;
    for (size_t i = 0; i < len; i++)
        sum += ar[i];
    return sum;
}

int main(void)
{
    shared_ari_ptr ar {new int[max_size_ar] {0}};
    unsigned count = 0;

    while(count < max_size_ar && std::cin >> ar[count]) count++;

    std::cout << sum_ar(ar, count);
    return 0;
}