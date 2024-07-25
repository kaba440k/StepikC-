/*Подвиг 3. Объявите в программе inline-функцию с именем get_max_3, которая имеет три целочисленные параметра и возвращает наибольшее из трех переданных чисел. В функции main прочитайте из входного потока три целых числа, записанных через пробел, вызовите для них функцию get_max_3 и выведите в консоль возвращенное значение в виде целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.15.3

Sample Input:

5 8 7
Sample Output:

8
*/
#include <iostream>

inline int get_max_3(int a, int b, int c){
    int max = a > b ? a : b;
    max = max > c ? max : c;
    
    return max;
}

int main()
{
    // здесь продолжайте функцию main
    int a, b, c;
    
    std::cin >> a >> b >> c;
    std::cout << get_max_3(a, b, c) << std::endl;

    return 0;
}