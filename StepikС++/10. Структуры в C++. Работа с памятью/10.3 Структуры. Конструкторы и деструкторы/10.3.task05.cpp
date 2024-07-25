/*Подвиг 5. Объявите в программе структуру с именем (типом) point3D так, чтобы ее объекты можно было создавать следующим образом:

point3D pt_null;
point3D pt_end(8, -5, 11);
При создании объектов указывается целочисленные координаты точки в трехмерном пространстве, которые должны сохраняться в приватных целочисленных (int) переменных, например, x, y, z. Если никакие значения не передаются, то переменные x, y, z должны принимать нулевые значения.

Объявите в структуре point3D следующие публичные методы:

void get_coords(int& x, int& y, int& z): возвращает значения координат из приватных переменных x, y, z.
Объявите в программе еще одну структуру с именем (типом) line3D так, чтобы ее объекты можно было создавать, следующим образом:

line3D line(point3D(0, 1, 2), point3D(10, 43, -21));
При создании объектов line3D передаются объекты структур point3D, которые должны сохраняться в приватных переменных, например, start_pt, end_pt. А в момент удаления объекта в консоль следует выводить строку (в конце должен быть символ переноса на новую строку '\n'):

"Deleted line: (x0, y0, z0) (x1, y1, z1)"

где (x0, y0, z0) - координаты начала; (x1, y1, z1) - координаты конца линии. Например, при удалении объекта line должна формироваться строка:

"Deleted line: (0, 1, 2) (10, 43, -21)"

Объявите в структуре line3D следующие публичные методы:

double length(): возвращает длину линии; вычисляется по формуле: 𝐿 = sqrt((x0-x1)^2+(y0-y1)^2+(z0-z1)^2)
const point3D& get_coords_start(): возвращает константную ссылку на приватную переменную start_pt;
const point3D& get_coords_end(): возвращает константную ссылку на приватную переменную end_pt.

В функции main создайте объект line типа line3D с координатами:

start_pt = (-5, 100, 45), end_pt = (0, 32, -42)

P. S. Только создать объект, больше ничего делать не нужно.
*/

#include <iostream>
#include <math.h>

// здесь объявляйте структуры
struct point3D{
private:
    int x,y,z;
public:
    point3D(int x = 0, int y = 0, int z = 0){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    
    void get_coords(int& x, int& y, int& z){
        x = this->x;
        y = this->y;
        z = this->z;
    }
};

struct line3D{
private:
    point3D points[2];
public:
    line3D(point3D start_pt, point3D end_pt){
        points[0] = start_pt;
        points[1] = end_pt;
    }
    ~line3D(){
        int x1,y1,z1,x2,y2,z2;
        points[0].get_coords(x1,y1,z1);
        points[1].get_coords(x2,y2,z2);
        std::cout << "Deleted line: ("<<x1<<", "<<y1<<", "<<z1<<") ("<<x2<<", "<<y2<<", "<<z2<<")";
    }
    double length(){
        int x1,y1,z1,x2,y2,z2;
        points[0].get_coords(x1,y1,z1);
        points[1].get_coords(x2,y2,z2);
        return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2) + pow(z1-z2, 2));
    }

    const point3D& get_coords_start(){
        return points[0];
    }

    const point3D& get_coords_end(){
        return points[1];
    }
};

int main(void)
{   
    point3D start_pt(-5, 100, 45);
    point3D end_pt(0, 32, -42);
    line3D line(start_pt, end_pt);
}