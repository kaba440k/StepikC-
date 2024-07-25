/*Подвиг 6 (на повторение). Продолжите программу. Выше в тексте программы объявлена переменная price_100 структуры tag_price (она скрыта, но она существует). В функции main необходимо объявить переменную с именем pr той же структуры tag_price и скопировать данные из переменной price_100 в переменную pr. Выведите в консоль значения всех полей переменной pr (в виде целых чисел, кроме первого поля name) в одну строчку через пробел в порядке их описания в структуре tag_price.
*/
#include <iostream>

/*
struct tag_price {
    char name[100];
    unsigned int rubs;
    unsigned char kops;
    unsigned int foreign_key;
};
*/

int main(void)
{
    tag_price pr;
    pr = price_100;

    std::cout << pr.name << " " << pr.rubs << " " << static_cast<unsigned int>(pr.kops) << " " << pr.foreign_key << std::endl;

}