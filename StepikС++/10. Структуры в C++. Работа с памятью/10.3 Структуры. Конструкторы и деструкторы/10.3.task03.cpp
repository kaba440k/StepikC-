/*Подвиг 3. Объявите в программе структуру с именем (типом) money так, чтобы ее объекты можно было создавать следующим образом:

money my_money(100);
money you_money(1000);
При создании объектов указывается количество денег, которое должно сохраняться в приватном целочисленном (int) поле total_money каждого объекта.

Объявите в структуре money два публичных метода:

int get_money(): возвращает количество денег (значение поля total_money);
void set_money(int volume): задает количество денег (в поле total_money).
В функции main создайте переменную rubs типа money с количеством денег 100 (задается при инициализации). Выведите в консоль количество денег, хранимое в объекте rubs в виде одного целого числа.
*/

#include <iostream>

struct money{
private:    
    int total_money;
public:
    money()
    {this->total_money = 0;}

    money(int m){ this->total_money = m; }

    int get_money(){ return this->total_money; }
    void set_money(int volume){ this->total_money = volume; } 
};

int main()
{
    money rubs(100);
    std::cout << rubs.get_money() << std::endl;
}