/*Подвиг 4. Продолжите программу. В функции main объявите две целочисленные переменные с именами width и height. Прочитайте из входного потока два целых числа, записанных через пробел, первое - в переменную width, а второе - в переменную height. Затем, объявите объект-строку с именем data_str и запишите в нее информацию в виде строки формата:

"Переменная width = <значение>, переменная height = <значение>"

Выведите в консоль сформированную строку data_str.

P. S. Для конвертации чисел в объект-строку используйте функцию to_string.

Sample Input:

10 20
Sample Output:

Переменная width = 10, переменная height = 20*/

#include <iostream>
#include <string>

using std::string;
using std::to_string;   // для конвертации чисел в строки
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// здесь продолжайте программу
    int width, height;
    std::cin >> width >> height;
    std::string data_str = "Переменная width = " + std::to_string(width) + 
                           ", переменная height = " + std::to_string(height);
    std::cout << data_str << std::endl;
    
}