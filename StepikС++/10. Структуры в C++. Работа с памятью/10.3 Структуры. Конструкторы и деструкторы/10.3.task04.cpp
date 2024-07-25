/*Подвиг 4. Объявите в программе структуру с именем (типом) triangle так, чтобы ее объекты (треугольники) можно было создавать следующим образом:

triangle tr_init;
triangle tr(5, 8, 6);
При создании объектов указывается целочисленные длины сторон треугольника, которые должны сохраняться в приватных целочисленных (int) переменных a, b, c. Если никакие значения не передаются, то переменные a, b, c должны принимать нулевые значения.

Объявите в структуре triangle следующие публичные методы:

bool is_triangle(): возвращает истину (true), если длины сторон a, b, c могут являться длинами сторон треугольника, и false - в противном случае;
void get_lengths(int& a, int& b, int& c): возвращает значения длин сторон из приватных переменных a, b, c;
void set_lengths(int a, int b, int c): задает значения приватных переменных a, b, c.
В функции main создайте переменную tr_1 типа triangle без указания длин сторон и переменную tr_2 со сторонами 7, 4, 8 (задаются при инициализации).

P. S. В консоль ничего выводить не нужно.
*/
#include <iostream>

// здесь объявляйте структуру
struct triangle{
    private:
        int a, b, c;
    public:
        triangle(int a=0, int b=0, int c=0){
            this->a = a;
            this->b = b;
            this->c = c;
        }
    
    bool is_triangle(){
        bool res = true;
        
        if(a + b < c || b + c < a || c + a < b)
            res = false;
        
        return res;
    }
    
    void get_lengths(int& a, int& b, int& c){
        a = this-> a;
        b = this-> b;
        c = this-> c;
    }
    
    void set_lengths(int a, int b, int c){
        this-> a = a;
        this-> b = b;
        this-> c = c;
    }
};

int main(void)
{
    triangle tr_1;
    triangle tr_2(7, 4, 8);
    
}