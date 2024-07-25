/*Подвиг 3. Продолжите программу. Объявите в функции main переменные fname, lname типа string. Прочитайте из входного потока имя в переменную fname и фамилию в переменную lname (имя и фамилия записаны через пробел каждое по одному слову). Затем третья переменная fio типа string должна содержать строку в формате:

<имя>, <фамилия>

Выведите полученную строку fio в консоль.

P. S. Переменные fname и lname после чтения данных из входного потока не должны менять своего значения.

Sample Input:

Bjarne Stroustrup
Sample Output:

Bjarne, Stroustrup*/

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// здесь продолжайте программу
    std::string fname, lname;
    std::cin >> fname >> lname;
    const std::string fio = fname + ", " + lname;
    cout << fio << endl;
}