/*Подвиг 8. Напишите программу, в которой из входного потока считывается строка целиком в объект-строку. Строка представляет собой фрагмент URL-адреса страницы сайта и может содержать несколько подряд идущих дефисов. Например:

cpp-obekt--stroka----string-operacii-s-obektami--klassa-string

Необходимо преобразовать эту строку так, чтобы все дублирующиеся дефисы (более одного подряд) были заменены на один дефис. Результат преобразования вывести в консоль в виде строки.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.9.8

Sample Input:

c_standartnye---potoki-vvodavyvoda--funkcii-putchar----i-getchar
Sample Output:

c_standartnye-potoki-vvodavyvoda-funkcii-putchar-i-getchar
*/
#include <iostream>
#include <string>

int main() {
    std::string input;
    
    // Чтение строки целиком из входного потока
    std::getline(std::cin, input);
    
    std::string output;
    bool lastWasDash = false;
    
    // Преобразование строки
    for (char ch : input) {
        if (ch == '-') {
            if (!lastWasDash) {
                output += ch;
                lastWasDash = true;
            }
        } else {
            output += ch;
            lastWasDash = false;
        }
    }
    
    // Вывод результирующей строки
    std::cout << output << std::endl;
    
    return 0;
}