/*Подвиг 8. Объявите в программе функцию через директиву extern "C" следующей сигнатуры:

double mean_2(int a, int b);
которая вычисляет среднее арифметическое значений a и b и возвращает вычисленный результат. Программа должна быть составлена так, чтобы она компилировалась на Си и С++.

В функции main прочитайте из входного потока два целых значения, записанных через пробел, и вызовите для них функцию mean_2. Возвращенное значение выведите в консоль с точностью до десятых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.13.8
Sample Input:

54 37
Sample Output:

45.5
*/
#ifdef __cplusplus
#   include <iostream>
#   include <iomanip>
extern "C" {
#else
#   include <stdio.h>
#endif

double mean_2(int a, int b)
{
    return (a + b) / 2.0;
}

#ifdef __cplusplus
}
#endif

int main(void)
{
    int a, b;

#ifdef __cplusplus
    std::cin >> a >> b;
    double res = mean_2(a, b);
    std::cout << std::fixed << std::setprecision(1) << res << std::endl;
#else
    scanf("%d %d", &a, &b);
    double res = mean_2(a, b);
    printf("%.1f\n", res);
#endif

    return 0;
}

