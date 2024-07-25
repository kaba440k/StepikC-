/*Подвиг 3. Объявите в программе структуру с идентификатором (типом) volume с тремя целочисленными полями width, height, depth (ширина, высота, глубина). 
Объявите в структуре метод с именем get_volume, который возвращает объем (целое число), вычисленный по формуле:

V=width⋅height⋅depth

В функции main объявите переменную data типа volume и занесите в поля width, height, depth целые числа, прочитанные из входного потока (по порядку, числа следуют через пробел). С помощью метода get_volume вычислите объем и выведите его в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.1.3

Sample Input:

6 10 3
Sample Output:

180
*/

#include <iostream>

struct volume {
    int width, height, depth;
    int get_volume(){return width * height * depth;};
};


int main(){
    int width, height, depth;
    std::cin >> width >> height >> depth;
    
    volume data {width, height, depth};
    
    std::cout << data.get_volume() << std::endl;

    return 0;
}