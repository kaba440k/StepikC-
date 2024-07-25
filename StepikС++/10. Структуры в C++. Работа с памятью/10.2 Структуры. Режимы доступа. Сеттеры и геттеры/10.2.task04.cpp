/*Подвиг 4. Объявите в программе структуру с именем (типом) thing и следующими приватными полями:

id: идентификатор; целое беззнаковое число;
price: цена; вещественное число;
weight: вес; вещественное число.
Объявите в этой же структуре следующие публичные методы:

unsigned get_id(): возвращает значение поля id;
void get_data(double& price, double& weight): передает по ссылкам price и weight значения соответствующих полей;
void set_data(unsigned id, double price, double weight): заносит в приватные поля id, price, weight переданные значения.
P. S. Функцию main в программе прописывать не нужно, только объявить структуру.
*/

#include <iostream>

struct thing{
private:    
    unsigned id;
    double price;
    double weight;
public:
    unsigned get_id(){return this->id;}
    void get_data(double& price, double& weight)
    {
        price = this->price;
        weight = this->weight;
    }
    void set_data(unsigned id, double price, double weight)
    {
        this->id = id;
        this->price = price;
        this->weight = weight;
    }
};