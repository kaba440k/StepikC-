/*Подвиг 7. В программе ниже замените функцию get_line эквивалентным лямбда-выражением. Лямбда-выражение следует объявлять внутри функции main и связать с переменной gl. Лямбда-выражение должно захватывать массив str и не иметь параметров. Вызовите в функции main лямбда-функцию gl и выведите в консоль строку str.

Sample Input:

I love C++
Sample Output:

I love C++
*/

#include <iostream>
#include <string>

void get_line(char* buff, size_t max_buff)
{
    std::string line;
    getline(std::cin, line);

    int i = 0;
    for(;i < line.length() && i < max_buff-1; ++i)
        buff[i] = line[i];
    buff[i] = '\0';
}

int main(void)
{
    char str[100];
    //get_line(str, sizeof(str));
    
    std::string line;
    getline(std::cin, line);

    auto gl = [&str, line] () {
        int i = 0;
        for(;i < line.length() && i < sizeof(str) - 1; ++i)
            str[i] = line[i];
        str[i] = '\0';
    };
    
    gl();
    std::cout << str;

    return 0;
}