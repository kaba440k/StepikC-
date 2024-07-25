/*Подвиг 6 (с повторением). Объявите перегруженные функции с именем get_rect, которые имеют следующие параметры (порядок важен):

два параметра типа (ширина и длина прямоугольника) без начальных значений;
параметр type (тип calc_type) с начальным значением calc_perimetr. 
Тип calc_type задается с помощью оператора using, как перечисление с константами calc_perimetr и calc_square. Если параметр type функции get_rect_value равен calc_perimetr, то функция должна возвращать периметр прямоугольника, а иначе - его площадь.

Одна функция get_rect должна иметь первые два целочисленные (тип int) параметры (ширину и длину), а другая - вещественные (тип double). Возвращать функции должны соответствующий тип данных.

P. S. В программе функцию main прописывать не нужно, а также что-либо выводить в консоль.
*/
#include <iostream>
#include <math.h>

using calc_type = enum {calc_perimetr, calc_square};

int get_rect(int width, int height, calc_type type = calc_perimetr)
{
    switch(type)
    {
        case calc_perimetr:
        return 2 * (width + height);

        case calc_square:
        return width * height;
    }
}

double get_rect(double width, double height, calc_type type = calc_perimetr)
{
    switch(type)
    {
        case calc_perimetr:
        return 2.0 * (width + height);

        case calc_square:
        return width * height;
    }
}