/*Подвиг 7 (на повторение). Объявите в программе структуру с идентификатором tag_point и полями x, y типа float (координаты точки на плоскости). В функции main объявите массив ps из total_points структур tag_point. Константа total_points должна быть объявлена через перечисление и равна 128. Для всех элементов массива ps сгенерируйте случайные координаты x, y в виде вещественных чисел в диапазоне [-100; 100]. Вычислите среднее арифметическое отдельно для координаты x и координаты y. Сохраните вычисленные средние значения в переменных mean_x и mean_y типа double.

P. S. В консоль ничего выводить не нужно.
*/

#include <iostream>
#include <stdlib.h>

enum {total_points = 128};

struct tag_point
{
    float x, y;
};

int main(void)
{
    tag_point ps[total_points];
    double mean_x = 0.0, mean_y = 0.0;

    for (int i = 0; i < total_points; i++)
    {
        ps[i].x = (float)(rand()) / RAND_MAX * (200) - 100;
        ps[i].y = (float)(rand()) / RAND_MAX * (200) - 100;
        mean_x += ps[i].x;
        mean_y += ps[i].y;
    }

    mean_x /= total_points;
    mean_y /= total_points;

}