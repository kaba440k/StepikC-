/*Подвиг 5. Объявите в программе две функции с именем get_square, которые вычисляют площадь фигуры и возвращают ее. Функции должны иметь следующие наборы параметров типа int:

у одной функции три параметра для вычисления площади треугольника; вычисленная площадь возвращается (тип double);
у другой функции два параметра для вычисления площадь прямоугольника; вычисленная площадь возвращается (тип int).
Напомню, что площадь треугольника по трем его сторонам можно вычислить по формуле Герона:
S = sqrt(p(p-a)(p-b)(p-c))
где p = (a+b+c)/2
В функции main прочитайте из входного потока три первых целых числа для длин сторон треугольника, а вторые два - для длин сторон прямоугольника. Все числа во входном потоке записаны в одну строчку через пробел. Вызовите функции get_square для вычисления площади треугольника и прямоугольника. Выведите вычисленные значения площади треугольника и прямоугольника (именно в таком порядке) в консоль в одну строчку через пробел с точностью до десятых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.13.5

Sample Input:

6 4 9 10 15
Sample Output:

9.6 150.0*/

#include <iostream>
#include <cmath>
#include <iomanip>

double get_square(int a, int b, int c)
{
    const double del = 2.0;
    double p = (a + b + c) / del;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    return S;
}

double get_square(int a, int b)
{
    double S = a * b;

    return S;
}

int main()
{
    using std::cin, std::cout;
    int at, bt, ct, ap, bp;
    cin >> at >> bt >> ct >> ap >> bp;

    double res1 = get_square(at, bt, ct);
    double res2 = get_square(ap, bp);

    using std::fixed, std::setprecision, std::endl;

    cout << fixed << setprecision(1) << res1 << " " << res2 << endl;

    return 0;
}