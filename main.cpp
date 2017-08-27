/* Сумма, кол-во и среднее арифметическое введеных чисел
#include <iostream>
using namespace std;

int main()
{
    cout << "Simple" << endl;
    setlocale(LC_ALL, "rus");
    double counter_in = 0 ; //количество введеных чисел
    double summ = 0;
    double in = 1;

    while (in != 0) {
        cin >> in;
        counter_in++;
        summ = summ + in;

        }
    counter_in--;
    cout << "Кол-во введенных чисел " << counter_in << endl;
    cout << "Сумма введенных чисел " << summ << endl;
    cout << "Среднее арифметическое: " << summ/counter_in;
    return 0;
} */

/* Диапазон чисел для суммирования не четных чисел в нем
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");
    double diap_begin=0;  //начало диапазона
    double diap_end=0;    //конец диапазона
    double diap_length=0; //длина последовательности
    double tmp; //для функции modf - сюда ложится целая часть дробного числа

    double summ=0;

    cout << "Введите диапазон чисел для суммирования не четных чисел в нем (диапазон включает первое и не включает второе число): " << endl;
    cout << "От  " ;
    cin >> diap_begin;
    cout << "До  ";
    cin >> diap_end;
    cout << endl;

    diap_length=diap_end-diap_begin; //получили длину

    for(int i=0; i<=diap_length; i++){ // i это номер числа в диапазоне
        if(modf( ( diap_begin + i ) / 2 , &tmp) == 0.0){  // к первому числу диапазона i (номер числа в диапазоне) и делим на 2
                                                          // если дробная часть равна 0.0 то все в порядке и число четное
                                                          // если дробная часть отлична от 0.0 то число не четное
                                                          // if (i % 2 != 0){} - еще вариант - остаток от деления
            continue; // ничего не делаем начинаем со следующей итерации цикла
                      // не обязательно
        }else {
            summ = summ + ( diap_begin + i ); //к общей сумме прибавляем не четное число
        }

    }

    cout << "Сумма не четных чисел диапазона равна " << summ << " " << endl;
    return 0;
} */

/* Пирамида
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");
    char data = '^';
    char emptyData = ' ';
    int height;
    cout << "Введите высоту треугольника: " ;
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
                {
                    cout << ' ';
                }

                for (int j = height - 2 * i; j <= height; j++)
                {
                    cout << '^';
                }
                cout << endl;

    }
    cout << endl;
    return 0;
}
*/

/* % 10
 * #include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");

    int mainNumber = 5678;

    cout << "Дано целое число: " << mainNumber << endl;
    cout << "Число  наизнанку: ";
    // остаток от деления четырехзначного числа 5678 на 10
        cout << mainNumber % 10; // 5678 % 10 = 8
    // далее делим mainNumber на 10 и записываем в переменную
    // так как тип переменной int, дробная часть отбросится
    // и mainNumber будет равен 567 (а не 567,8)
        mainNumber /= 10;
    // показываем остаток от деления 567 на 10 на экран
        cout << mainNumber % 10;
    mainNumber /= 10;
        cout << mainNumber % 10;
    mainNumber /= 10;
        cout << mainNumber % 10;
    mainNumber /= 10;

    cout << endl << endl;
    return 0;
} */

/*  for(;;)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");
    int digit = 0;	 // число для расчета
    char exit = 'y'; // для выхода или продолжения

    for (;;)
    {
        cout << "Введите число: ";
        cin >> digit;
        cout << "Квадрат " << digit << " = " << digit * digit;
        cout << "\nПродолжить ввод чисел - Y, Выйти  - N: ";
        cin >> exit; // выбор пользователя
        if (exit != 'y' && exit != 'Y')
            break; // прервать цикл
    }
    return 0;
} */

/* Возраст спортзал
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");

    int min_vozrast=110;
    int max_vozrast=0;
    int vvod=0;
    int count_people=0;
    int summ_vozrast = 0 ;
    double sred_vozrast=0;

    cout << "введи количество посетителей ";
    cin >> count_people;

    for(int i=1; i <= count_people ; i++){ //количество посетителей
        cout << "возраст " << i << endl;
        cin >> vvod;
        if (vvod < min_vozrast)
        {
            min_vozrast = vvod;
        }
        if (vvod > max_vozrast)
        {
            max_vozrast = vvod;
        }
        summ_vozrast = vvod + summ_vozrast; //для подсчета среднего возраста
    }

    cout << "самый молодой " << min_vozrast << endl;
    cout << "самый старый " << max_vozrast << endl;
    sred_vozrast = summ_vozrast/count_people;
    cout << "средний возраст " << sred_vozrast << endl;

    return 0;
} */

/* Часы спортзал
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");

    int dollar=100;
    int hour=0;
    int count_people=0;
    int summ_hour=0;

    cout << "введи количество посетителей ";
    cin >> count_people;

    for(int i=1; i <= count_people ; i++){ //количество посетителей
        cout << "количество часов которые провел  " << i << endl;
        cin >> hour;
        summ_hour = summ_hour + hour;
    }

    cout << "столько денег заработал спортзал " << summ_hour*dollar << endl;

    return 0;
} */

/* Разгрузка склада
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "rus");

    int count_sclad = 15;
    int vvod;


    for(int i=0; i <= count_sclad; i++)
    {
        cout << "сколько разгрузить?  ";
        cin >> vvod;
        cout << " ";
        if(vvod > count_sclad){
            cout << "нету столько для разгрузки, осталось " << count_sclad;
        }else{
            count_sclad = count_sclad - vvod;
        }

    }
    cout << "все разгрузили";
    return 0;
} */

/* Правильные окончания
#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "rus");

int enterNumber = 0;

cout << "Введите целое число  (от 1 до 9999): ";
cin >> enterNumber;

// проверяем входит ли введенное число в заданный диапазон
if (enterNumber <= 0 ||enterNumber > 9999)
    cout << "Число не входит в диапазон от 1 до 9999!\n";
else // если да - приступаем к выводу на экран
{
    cout << "\nВы ввели: ";

// чтобы добраться до первой цифры в введенном числе
// (если оно четырехзначное), надо это число поделить
// на 1000 и взять от него остаток от деления на 10
// например 8 888 / 1000 = 8 (888 тысячные отбрасываются
// т.к. введенное число типа int), далее 8 % 10 = 8
// так же не ошибитесь с оператором == (равно)
    if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";
    else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
    else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
    else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
    else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
    else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
    else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч ";
    else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
    else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";


    if ((enterNumber / 100) % 10 == 1) cout << "сто ";
    else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
    else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
    else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
    else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
    else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
    else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
    else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
    else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";

    if ((enterNumber / 10) % 10 == 1)
    {
        if (enterNumber % 10 == 0) cout << "десять долларов";
        else if (enterNumber % 10 == 1) cout << "одинадцать долларов";
        else if (enterNumber % 10 == 2) cout << "двенадцать долларов";
        else if (enterNumber % 10 == 3) cout << "тринадцать долларов";
        else if (enterNumber % 10 == 4) cout << "четырнадцать долларов";
        else if (enterNumber % 10 == 5) cout << "пятнадцать долларов";
        else if (enterNumber % 10 == 6) cout << "шестнадцать долларов";
        else if (enterNumber % 10 == 7) cout << "семнадцать долларов";
        else if (enterNumber % 10 == 8) cout << "восемнадцать долларов";
        else if (enterNumber % 10 == 9) cout << "девятнадцать долларов";
    }

        if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
        else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
        else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
        else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
        else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
        else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
        else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
        else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";

    if ((enterNumber / 10) % 10 != 1)
    {
        if (enterNumber % 10 == 0) cout << "долларов";
        else if (enterNumber % 10 == 1) cout << "один доллар";
        else if (enterNumber % 10 == 2) cout << "два доллара ";
        else if (enterNumber % 10 == 3) cout << "три доллара ";
        else if (enterNumber % 10 == 4) cout << "четыре доллара ";
        else if (enterNumber % 10 == 5) cout << "пять долларов ";
        else if (enterNumber % 10 == 6) cout << "шесть долларов ";
        else if (enterNumber % 10 == 7) cout << "семь долларов ";
        else if (enterNumber % 10 == 8) cout << "восемь долларов ";
        else cout << "девять долларов ";
    }
}

cout << endl << endl;
return 0;
}*/

/* Исключения
#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "rus");
    int num1;
    int num2;

    int var = 3;
    while (var != 0)
    {
        cout << "Введите число num1: ";
        cin >> num1;
        cout << "Введите число num2: ";
        cin >> num2;

        cout << "num1 + num2 = " << num1 + num2 << endl;
        cout << "num1 / num2 = ";

        try // тут располагается код, который потенциально может вызвать ошибку
        {
            if (num2 == 0)
            {
                throw 999; // генерировать целое число 999
            }
            cout << num1 / num2 << endl;
        }

        catch (int thr)// сюда передастся число, которое сгенерировал throw
        {
            cout << "Ошибка №" << thr << " - деление на 0!!!" << endl;
        }

        cout << "num1 - num2 = " << num1 - num2 << endl;
        cout << "=================================" << endl << endl;

        var--;
    }

    cout << "Программа завершила работу!" << endl << endl;

    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "rus");

}
