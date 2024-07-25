/*Подвиг 6. Продолжите программу. В структуре point добавьте следующие публичные методы:

void set_coords(int x, int y, int z) - перегруженный сеттер для записи координат в массив coords в поле v_int (переменная type должна быть изменена на значение data_int);
void set_coords(double x, double y, double z) - перегруженный сеттер для записи координат в массив coords в поле v_double (переменная type должна быть изменена на значение data_double);
data_type get_type() - метод возвращает значение переменной type;
int get_size() - метод возвращает значение константы max_coords;
bool get_coords(int& x, int& y, int& z) - перегруженный геттер для записи по ссылкам x, y, z значений из массива coords поля v_int; если при этом type не равен data_int, то запись не производится и возвращается false, иначе данные записываются (по ссылкам) и возвращается true;
bool get_coords(double& x, double& y, double& z) - перегруженный геттер для записи по ссылкам x, y, z значений из массива coords поля v_double; если при этом type не равен data_double, то запись не производится и возвращается false, иначе данные записываются (по ссылкам) и возвращается true.
В функции main объявите переменную pt и занесите в нее целочисленные координаты:

5, -8, 34

В зависимости от значения поля type (воспользуйтесь методом get_type) выведите в консоль либо целочисленные координаты в одну строчку через пробел, либо вещественные (так же в одну строчку через пробел с точностью до десятых).
*/

#include <iostream>
#include <iomanip>

enum data_type { data_none = 1, data_int, data_double };

struct point {
private:
    enum { max_coords = 3 };

    union {
        int v_int;
        double v_double;
    } coords[max_coords];

    data_type type = data_none;

public:
    void set_coords(int x, int y, int z)
    {
        coords[0].v_int = x;
        coords[1].v_int = y;
        coords[2].v_int = z;
        type = data_int;
    }
    void set_coords(double x, double y, double z) 
    {
        coords[0].v_double = x;
        coords[1].v_double = y;
        coords[2].v_double = z;
        type = data_double;
    }
    data_type get_type() { return type; }
    int get_size() { return max_coords; }
    bool get_coords(int& x, int& y, int& z)
    {
        if(type != data_int)
            return false;
        x = this->coords[0].v_int;
        y = this->coords[1].v_int;
        z = this->coords[2].v_int;
        return true;
    }
    bool get_coords(double& x, double& y, double& z)
    {
        if(type != data_double)
            return false;
        x = this->coords[0].v_double;
        y = this->coords[1].v_double;
        z = this->coords[2].v_double;
        return true;
    }
};

int main(void)
{
    point pt;
    pt.set_coords(5, -8, 34);

    if(pt.get_type() == data_int){
        int x, y, z;
        pt.get_coords(x, y, z);
        std::cout << x << ' ' << y << ' ' << z << std::endl;
    }


    if(pt.get_type() == data_double){
        double x, y, z;
        pt.get_coords(x, y, z);
        using std::fixed;
        using std::setprecision;
        std::cout << fixed << setprecision(2) << x << ' ' << y << ' ' << z << std::endl;

    }
}