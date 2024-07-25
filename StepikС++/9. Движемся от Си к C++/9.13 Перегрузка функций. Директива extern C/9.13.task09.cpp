/*Подвиг 9. Объявите в программе перегруженные функции get_mean со следующими сигнатурами:

double get_mean(const short* d, const size_t len);
double get_mean(const int* d, const size_t len);
double get_mean(const double* d, const size_t len);
Эти функции должны вычислять и возвращать среднее арифметическое переданного массива d длиной len элементов.

В функции main объявите массив с типом short, длиной 100 и прочитайте из входного потока целые числа, записанные через пробел. Вызовите для этого массива функцию get_mean и вычислите среднее арифметическое для прочитанных чисел из входного потока. Результат выведите в консоль с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.13.9

Sample Input:

5 4 3 10 -12 9 8 34 2 13 11 7
Sample Output:

7.83
*/
#include <iostream>

double get_mean(const short* d, const size_t len) {
    auto x = d[ 0 ];
    for( int i = 1; i < len; i++ ) x += d[ i ];
    return 1. * x / len;
}
double get_mean(const int* d, const size_t len) {
    auto x = d[ 0 ];
    for( int i = 1; i < len; i++ ) x += d[ i ];
    return 1. * x / len;
}
double get_mean(const double* d, const size_t len) {
    auto x = d[ 0 ];
    for( int i = 1; i < len; i++ ) x += d[ i ];
    return 1. * x / len;
}

int main()
{
    short buff[ 100 ] = {0};
    size_t len = 0;
    while( std::cin >> buff[ len++ ] );
    len--;
    printf( "%.2f", get_mean( buff, len ) );
    return 0;
}