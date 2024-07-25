/*Подвиг 4. Объявите в программе структуру с идентификатором (типом) book (книга) и следующими полями:

title: название книги; строка, максимальной длины 200 символов;
author: автор; строка, максимальной длины 100 символов;
price: цена; целое число;
npages: число страниц; целое число.
Объявите в структуре book метод с именем price_per_page, который возвращает цену за одну страницу (вещественное число), вычисленную по формуле:

price/npages

В функции main объявите массив lib с типом book длиной 10 элементов. Прочитайте из входного потока данные в массив lib (по порядку), представленные в формате:

<название книги>
<автор>
<цена> <число страниц>

Выведите в консоль в одну строчку через пробел цену за одну страницу прочитанных книг с точностью до сотых.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/10.1.4

Sample Input:

Программирование на Си
Кен Томпсон
540 230
Программирование на С++
Бьерн Страуструп
753 548
Лекции по C/C++
Сергей Балакирев
100 500
Sample Output:

2.35 1.37 0.20
*/

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std; 

struct book {
    char title[200];
    char author[100];
    int price;
    int npages;

    double price_per_page() { return double(price) / npages; }
};

int main(void) {
    book lib[10];

    int count = 0;
    string s;
    while (count < 10 && getline(cin, s)) {
        strncpy(lib[count].title, s.data(), sizeof(lib[count].title));
        getline(cin, s);
        strncpy(lib[count].author, s.data(), sizeof(lib[count].author));
        cin >> lib[count].price >> lib[count].npages;
        getchar();
        ++count;
    }

    for (int i = 0; i < count; ++i)
        cout << fixed << setprecision(2) << lib[i].price_per_page() << ' ';
    

}