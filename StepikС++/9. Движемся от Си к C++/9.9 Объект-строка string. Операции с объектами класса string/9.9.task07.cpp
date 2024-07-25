/*Подвиг 7. Продолжите программу. В функции main объявите массив объектов-строк с именем cities длиной max_cities. Константу max_cities = 10 определите через перечисление. Из входного потока по порядку прочитайте названия городов, записанных через пробел, в массив cities. Количество читаемых данных не должно превышать значения max_cities. После этого в объект-строку res запишите по порядку (с начала) через пробел все города, длины имен которых больше пяти символов. Выведите в консоль полученную строку res.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.9.7

Sample Input:

Moscow Ufa Tver Piter Toliatti Samara Kazan
Sample Output:

Moscow Toliatti Samara
*/
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Определение константы max_cities через перечисление
    enum { max_cities = 10 };
    
    // Объявление массива объектов-строк
    std::string cities[max_cities];
    
    // Чтение входных данных
    std::string input;
    std::getline(cin, input);
    
    // Используем stringstream для разбора строки на слова
    std::istringstream iss(input);
    std::string city;
    
    // Считывание городов в массив
    int count = 0;
    while (iss >> city && count < max_cities) {
        cities[count++] = city;
    }
    
    // Формирование результирующей строки
    std::string res;
    for (int i = 0; i < count; ++i) {
        if (cities[i].length() > 5) {
            if (!res.empty()) {
                res += " ";
            }
            res += cities[i];
        }
    }
    
    // Вывод результирующей строки
    cout << res << endl;
}