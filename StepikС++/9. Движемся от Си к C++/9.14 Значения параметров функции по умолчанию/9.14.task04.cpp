/*Подвиг 4. Объявите функцию с именем check_password, которая первым параметром принимает корректную Си-строку (пароль), а вторым - строку chars с начальным значением в виде строки "$%!?@#". Функция должна проверять, есть ли в пароле хотя бы один символ из chars и что он (пароль) состоит минимум из 8 символов. Если проверка проходит, то функция check_password возвращает булево значение true, а иначе - false.

В функции main прочитайте пароль из входного потока (записанного в виде слова, без пробелов). Вызовите для прочитанной строки функцию check_password и выведите в консоль строку "yes", если пароль корректен, и "no" в противном случае.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.14.4

Sample Input:

mypass!1234
Sample Output:

yes
*/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool check_password(string password, string chars="$%!?@#") {
    return password.size() >= 8 && password.find_first_of(chars) != string::npos;
}

int main()
{
    string s;
    cin >> s;
    
    check_password(s) ? cout << "yes" : cout << "no";
    
    return 0;
}