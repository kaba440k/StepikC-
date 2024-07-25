/*Подвиг 3. Объявите функцию с именем get_rect_value, которая имеет следующие параметры (порядок важен):

два целочисленных параметра типа int (ширина и длина прямоугольника) без начальных значений;
параметр type (тип calc_type) с начальным значением calc_perimetr. 
Тип calc_type задается с помощью оператора using, как перечисление с константами calc_perimetr и calc_square. Если параметр type функции get_rect_value равен calc_perimetr, то функция должна возвращать периметр прямоугольника (в виде целого числа), а иначе - его площадь.

В функции main прочитайте из входного потока два целых числа (ширину и длину прямоугольника), записанных через пробел. Вызовите функцию get_rect_value с этими значениями для вычисления его периметра. Выведите в консоль полученное значение.

Sample Input:

34 57
Sample Output:

182
*/
#include <iostream>

using calc_type = enum {calc_perimetr, calc_square};

int get_rect_value(int width, int height, calc_type type = calc_perimetr)
{
    switch(type)
    {
        case calc_perimetr:
        return 2 * (width + height);

        case calc_square:
        return width * height;
    }
}

int main()
{
    int width, height;
    std::cin >> width >> height;
    std::cout << get_rect_value(width, height) << std::endl;
    return 0;
}