/*Подвиг 4. Объявите в программе две функции с именем get_perimetr, которые вычисляют периметр фигуры и возвращают целочисленные значения. Функции должны иметь следующие наборы параметров типа int:

у одной функции три параметра для вычисления периметра треугольника; вычисленный периметр возвращается;
у другой функции два параметра для вычисления периметра прямоугольника; вычисленный периметр возвращается.
Функцию main в программе объявлять не нужно.

P. S. Функции get_perimetr вызывать не нужно, только объявить. В консоль также ничего не выводится.
*/

int get_perimetr(int a, int b, int c)
{
    return a + b + c;
}

int get_perimetr(int width, int height)
{
    return 2 * (width + height);
}