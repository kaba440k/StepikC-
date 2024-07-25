/*Подвиг 5. Объявите в программе структуру с идентификатором (типом) vector4D и вещественными полями x, y, z, t. Объявите в этой структуре следующие методы:

void read_data(FILE* stream, char sep=' '); // для чтения из входного потока stream данных в переменные x, y, z, t, записанных через разделитель sep
double length(); // для вычисления длины радиус вектора по формуле sqrt(x^2+y^2+z^2+t^2)

В функции main объявите две переменные v1 и v2 типа vector4D. Прочитайте для них (сначала для v1, а затем, для v2) из входного потока stdin с помощью метода read_data вещественные значения, записанные через точку с запятой. Выведите в консоль в одну строчку через пробел значения длин векторов v1 и v2 (именно в таком порядке), вычисленных с помощью метода length. Вещественные числа должны быть выведены с точностью до тысячных.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.1.5

Sample Input:

4.1; 2.3; 10.0; -3.0
-2.4; 3.6; 9.8; 7.4
Sample Output:

11.450 13.020
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

struct vector4D {
    double x, y, z, t;
    void read_data(FILE* stream, char sep = ' ') {
        char mask[50];
        sprintf(mask, "%s%c %s%c %s%c %s", "%lf",sep,"%lf", sep,"%lf", sep,"%lf");
        fscanf(stream, mask, &x, &y, &z, &t);
    };
    double length() { return sqrt(x * x + y * y + z * z + t * t); };

};

int main()
{
    vector4D v1;
    vector4D v2;
    v1.read_data(stdin, ';');
    v2.read_data(stdin, ';');
    std::cout << std::fixed << std::setprecision(3) << v1.length() << ' ' << v2.length();
    
    
}