**Подвиг 1.** Выберите все верные объявления прототипов функций со значениями параметров по умолчанию.

* (+)double normal(int mean, double sigma = 1.0);

* (-)bool is_fill(char fill = '0', const char* str);

* (+)char* get_path(int count, const char sep='/', const char* path = "", const char *ext="");

* (+)short min_2(short a = 0, short b = 0);

* (-)void set_struct_data(int val, short pos = 0, double weight);

* (+)void set_coords(int x, int y, int z = -1);

* (-)unsigned rand_pos(unsigned a = 10, unsigned b);


**Подвиг 2.** Имеется следующее объявление функции:

void set_struct_data(int val, const char* name, short pos = 0, double weight = 0.0)
{
    // здесь тело функции
}

Выберите все верные варианты вызова этой функции.

* (+)set_struct_data(5, "Керниган", 54, 83.5);

* (+)set_struct_data(6, "Ритчи", 76);

* (-)set_struct_data("Страуструп", 76);

* (-)set_struct_data(-1);

* (+)set_struct_data(100, "Sergey");

* (-)set_struct_data();


**Подвиг 8 (на повторение).** Выберите все верные утверждения, связанные с типом (классом) std::string языка С++.

* (+)при использовании типа (класса) std::string можно не заботиться о максимальной длине строки (в разумных пределах)

* (+)перед использованием типа (класса) std::string в программе следует подключить заголовок string

* (-)в С++ запрещено использовать C-строки в виде массива символов

* (+)в С++ можно по-прежнему использовать C-строки в виде массива символов

* (+)тип (класс) std::string предоставляет удобный инструмент для представления и обработки строк

* (-)перед использованием типа (класса) std::string в программе следует подключить заголовок iostream

* (+)тип (класс) std::string основан на динамическом массиве символов (char)


**Подвиг 9 (на повторение).** Выберите все верные варианты объявления и инициализации объектов-строк.

* (+)const std::string s_4 ("Hello, C++");

* (+)std::string s_3 {"Hello, C++"};

* (+)const std::string s_2;

* (+)std::string s_8 {"Sergey" "Balakirev"};

* (-)std::string s_7 {"Sergey" + "Balakirev"};

* (+)const std::string str; std::string s_6 = str;

* (+)std::string s1 {"A"}, s2 {"B"}; std::string s_9 = s1 + s2;

* (+)std::string s_1;

* (+)std::string str; std::string s_5 = str;


**Подвиг 10 (на повторение).** Пусть в программе объявлены следующие переменные:

int var {-54};
int *ptr_v {&var};
short marks[] = {4, 3, 5, 2, 5};
Выберите все верные варианты объявления и инициализации ссылок.

* (+)short& lnk_7 {marks[3]};

* (+)int& lnk_4 = *ptr_v;

* (+)short& lnk_6 {*marks};

* (-)int& lnk_3 (ptr_v);

* (-)int& lnk_2 {&var};

* (+)int& lnk_1 = var;

* (-)short& lnk_5 = marks;

* (-)int& lnk_8 = &ptr_v;

