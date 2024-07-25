**Подвиг 1.** Выберите все верные утверждения, касающиеся inline-функций языка С++.

* (-)ключевое слово inline, прописанное у функций, гарантированно определяет inline-функцию

* (+)функции с короткими реализациями (телами), прописанными в заголовочных файлах, часто рассматриваются компиляторами, как кандидаты в inline-функции

* (+)ключевое слово inline, прописанное у функций, рассматривается компилятором лишь как рекомендация формирования inline-функции

* (+)inline-функция не вызываются, как обычная функция, ее тело просто подставляется (компилятором) в места вызовов


**Подвиг 2.** Выберите все верные варианты объявления inline-функций.

* (+)int inline get_max(int a, int b);

* (-)double abs_d(double x) inline;

* (+)void inline set_x(int x);

* (+)inline int get_min(int a, int b);

* (-)inline set_y(int y);


**Подвиг 8 (на повторение).** Отметьте для переменных их вычисляемый тип данных.

* (float)auto var_1 {0.5f};	

* (int)auto var_2 {0};	

* (unsigned int)auto var_3 {245u};	

* (long)auto var_4 (486L);	

* (long double)auto var_5 {4.86L};	

* (char)auto var_6 ('d');	

* (short)auto var_7 = (short)-5;	


**Подвиг 9 (на повторение).** Пусть в программе объявлены следующие переменные:

const char symbol_f = 'f';
const short* ptr_sh;
int count = 0;
const int& lnk = count;

Соберите для переменных var_1, ..., var_6 их вычисляемый тип данных. Например, для const int* нужно отметить три колонки: const, int, *.

* (char)auto var_1 = symbol_f;	

* (const, char, *)auto var_2 = &symbol_f;	

* (const, short, *)auto var_3 = ptr_sh;	

* (int, *)auto var_4 = &count;	

* (int)auto var_5 = lnk;	

* (short)auto var_6 = *ptr_sh;