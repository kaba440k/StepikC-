/*Подвиг 4. Продолжите программу. В функции main объявите smart-указатель типа unique_ptr с именем p_int, который работает с данными типа int. Выделите область памяти для типа int и присвойте ее адрес указателю p_int. Занесите прочитанное из входного потока значение переменной x в выделенную область памяти с помощью указателя p_int. Выведите в консоль значение, на которое ссылается указатель p_int.

Sample Input:

123
Sample Output:

123
*/

#include <iostream>
#include <memory>

int main() {
    
    int x;
    std::cin >> x;
    
    std::unique_ptr <int> p_int = {std::make_unique <int> (x)};
    
    std::cout << *p_int;


}