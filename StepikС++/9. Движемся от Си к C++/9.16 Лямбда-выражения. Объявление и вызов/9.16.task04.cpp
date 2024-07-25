/*Подвиг 4. Допишите программу. В функции main объявите массив с именем func_filter, который должен быть инициализирован следующими лямбда-выражениями (порядок важен):

принимает один целочисленный параметр; возвращает 1, если переданное значение четно, и 0 - если нечетно;
принимает один целочисленный параметр; возвращает 1, если переданное значение отрицательно, и 0 - если неотрицательно;
принимает один целочисленный параметр; возвращает 1, если переданное значение положительно (строго больше нуля), и 0 - иначе.
Прочитайте из входного потока целочисленное значение и выведите в консоль результат работы второй лямбда-функции массива func_filter.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.16.4

Sample Input:

7
Sample Output:

0
*/
#include <vector>
#include <functional>
#include <iostream>

int main(void)
{ 
    auto f1 = [] (int x) {return x % 2 == 0;};
    auto f2 = [] (int x) {return x % 2 < 0;};
    auto f3 = [] (int x) {return x % 2 >= 0;};

    bool (*func_filter[])(int) = { f1, f2, f3 };

    int x;
    std::cin >> x;
    
    std::cout << func_filter[1](x);
}