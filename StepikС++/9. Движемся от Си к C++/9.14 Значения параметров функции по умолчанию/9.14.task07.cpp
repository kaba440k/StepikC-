/*Подвиг 7* (с повторением). Объявите функцию со следующей сигнатурой:

int sort(short* ar, size_t len, type_sort type=sort_asc);
Данная функция должна выполнять сортировку элементов массива ar длиной len (элементов) в соответствии с параметром type. Если type равен sort_asc, то делается сортировка по возрастанию, а если type равен sort_desc, то по убыванию. Константы sort_asc и sort_desc должны быть объявлены с помощью перечисления с типом (перечисления) type_sort, который задается оператором using. Функция sort должна возвращать количество элементов, которые поменяли свое значение при сортировке. Например, при передаче массива:

3, 2, 4, 5

После сортировки по возрастанию имеем:

2, 3, 4, 5

и функция sort должна вернуть число 2, так как два элемента поменяли свое значение.

P. S. В программе функцию main прописывать не нужно, а также что-либо выводить в консоль.
*/
#include <iostream>

#define compare(a, b, type) type == sort_asc ? a <= b : a >= b

using type_sort = enum{sort_asc, sort_desc};

int sort(short* ar, size_t len, type_sort type=sort_asc) {
    int count = 0;
    
    short copy_ar[len];
    
    for (int i = 0; i < len; i++) copy_ar[i] = ar[i];
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (compare(ar[i], ar[j], type)) {
                short tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < len; i++) {
        if (ar[i] != copy_ar[i]) count++;
    }
                    
    return count;
}